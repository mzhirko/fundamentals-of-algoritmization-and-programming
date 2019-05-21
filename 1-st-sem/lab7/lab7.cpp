//---------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <conio.h>


#pragma hdrstop
int count_one(char* easyString);

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
    char easyString[1024] = "\0";


    gets(easyString);

    // char processing
    //for(int i = 0; i <= strlen(easyString); i++) {
    //    if (easyString[i] == '1') {
    //            easyString[i] = '0';
    //    }
    //}

  char* word;
  printf ("Splitting string \"%s\" into tokens:\n", easyString);

  word = strtok (easyString, " ");

  while (word != NULL) {
    int length = strlen(word);
    if (length%2 != 0) {
        printf ("%s - %d \n", word, count_one(word));
   } /*else {
        printf("%s - this string contains even number of symbols\n", word);
   }*/
        word = strtok (NULL, " ");
  }
  getch();
  return 0;
}
//---------------------------------------------------------------------------
int count_one(char* easyString) {
  int count = 0;

  for (int i = 0; i < strlen(easyString); i++)
    if (easyString[i] == '1') count++;

  return count;
}
