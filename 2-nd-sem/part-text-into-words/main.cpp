#include <wchar.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <set>
#include <exception>
#include <codecvt>

bool compare (std::wstring v1, std::wstring v2) {

    return std::lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());
}

std::vector<std::wstring> readWords(const char* fileName, const char* localeName, int lineCount) {
    wchar_t ch;
    std::vector<std::wstring> words;
    std::wstring word;

    int lines = 0;

    std::wifstream inputStream;
    inputStream.exceptions(std::wifstream::failbit);

    inputStream.imbue(std::locale(localeName));
    inputStream.open(fileName);

    while(inputStream.peek() != WEOF) {
        inputStream.get(ch);

        if (ch == '\r') {
            lines++;
        }


        if (lines == lineCount)
            break;

        if (std::iswalnum(ch)) {
            word += ch;
            continue;
        }



        if (word.empty())
            continue;

        std::transform(word.begin(), word.end(), word.begin(), std::towlower);

        words.push_back(word);
        word.clear();

    }

    inputStream.close();

    return words;
}

void writeWordsToFile(std::vector<std::wstring> words, const char* fileName, const char* localeName) {
    std::wofstream outputStream;
    outputStream.exceptions( std::wofstream::failbit);
    outputStream.imbue(std::locale(localeName));
    outputStream.open(fileName);

    for(int i=0; i < (int)words.size(); i++) {
        outputStream << words[i] << std::endl;
    }

    outputStream.close();
}

int main (int, char const **argv) {

/*

    if (argv[1] == NULL) {
        std::cerr << "Text file as parameter required" << std::endl;
        return 0;
    }
*/
    std::string fileName = "input.txt";

    std::string loc="en_US.utf8";

    int lineCount = 0;

    std::cout << "Line count for processing:" << std::endl;
    std::cin >> lineCount;

/*    if (argv[2] != NULL) {
        loc=argv[2];
    }
*/

    // setup locale
    setlocale(LC_ALL, loc.c_str());
    std::ios_base::sync_with_stdio(false);

    try {

        // read words from file
        std::vector<std::wstring> words = readWords(fileName.c_str(), loc.c_str(), lineCount);

        //sort words
        std::sort(words.begin(), words.end(), compare);

        // write to output file
        writeWordsToFile(words, fileName.append(".tokenized").c_str(), loc.c_str());
    }

    catch (const std::ios_base::failure exception) {
        std::cout << exception.what() << std::endl;

        return 1;
    }

    return 0;
}

