#include <iostream>
#include <clocale>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
using namespace std;
void shablon ()
{
cout << "Прежде, чем начать работу по редактировнию, ознакомьтесь с шаблоном:" << endl;
cout << "............\n---------------------------------------------\n";
cout << "Stephan         (Имя студента)" << endl;
cout << "2               (Номер группы студента)" << endl;
cout << "8               (Оценка по физике студента)" << endl;
cout << "7               (Оценка по математике студента)" << endl;
cout << "7,5             (Средний балл студента)";
cout << "\n---------------------------------------------\n............\n";
}
int main()
{
 setlocale(LC_ALL, "rus");
 int ks, i, ii;
 struct stud
 {
  string name;
  int geo, math, fiz, rus;
  double sb;
  int ng;
 };
 cout << "Введите количество студентов:  ";
 cin >> ks;
 cout << endl;
 stud student[50];
 //работа с файлами
 ofstream fout("res.txt");
 for (ii = 1; ii <= ks; ii++)
 {
  fflush(stdin);
  cout << "Введите имя [" << ii << "] студента:  ";
  getline(cin, student[ii].name);
  getline(cin, student[ii].name);
  fout << student[ii].name << endl;
  cout << endl << "Введите номер его группы:  ";
  cin >> student[ii].ng;
  fout << student[ii].ng << endl;
 fiz:
  cout << endl << "Введите его оценку по физике(1-10):  ";
  cin >> student[ii].fiz;
  fout << student[ii].fiz << endl;
  if (student[ii].fiz > 10)
  {
   cout << endl << "Вы уверены? Давайте попробуем еще раз!" << endl;
   goto fiz;
  }
 math:
  cout << endl << "Введите его оценку по математике(1-10):  ";
  cin >> student[ii].math;
  fout << student[ii].math << endl;
  if (student[ii].math > 10)
  {
   cout << endl << "Вы уверены? Давайте попробуем еще раз!" << endl;
   goto math;
  }
  student[ii].sb = (student[ii].math + student[ii].fiz) / 2.;
  fout << student[ii].sb << endl;
  cout << endl << endl << endl << "---------------------------------------------------------------" << endl << endl << endl << endl;
 }
 fout.close();
 //Заполнение базы данных закончена
M:
Povtor:

 cout << " База заполнена.\n 1.Вывести список студентов определенной группы\n 2.Вывести полный список студентов\n 3.Редактирование\n 0.Закрыть программу" << endl;
 int Vibor;
 cin >> Vibor;

 switch (Vibor)
 {
 case 1:
 {
  //Работа с информацией

  int nb, kol = 0;
  cout << "Иформацию о студентах какой группы вы хотите увидеть:  ";
  cin >> nb;
  cout << endl;
  ifstream fin("res.txt");
  if (!fin.is_open()) // если файл не открыт
   cout << "Файл не может быть открыт!\n";
  char namee[50], group[10], fiz[15], math[15], srbull[15];
  for (i = 1; i <= ks; i++)
  {
   fin >> namee;
   fin >> group;
   fin >> fiz;
   fin >> math;
   fin >> srbull;
   int numG = atoi(group);
   if (numG == nb)
   {
    cout << endl << endl << "Имя студента:  " << namee << endl;
    cout << "Оценка по математике:  " << fiz << endl;
    cout << "Оценка по математике:  " << math << endl;
    cout << "Средний балл:  " << srbull << endl;
   }
   else kol++;
  }
  cout << endl << endl;
  if (kol == ks)
   cout << "В этой группе нет студентов\n\n\n\n";

  goto Povtor;
 }
 break;
 case 0: {
     return 0;
 }
         break;
 case 4:
 {

  cout << "Информация обо всех студентах:" << endl << endl;
  for (i = 1; i <= ks; i++)
  {
   cout << endl << "Имя студента:  " << student[i].name;
   cout << endl << "Номер группы:  " << student[i].ng;
   cout << endl << "Оценка по математике:  " << student[i].math;
   cout << endl << "Оуенка по физике:  " << student[i].fiz;
   cout << endl << "Средний балл:  " << student[i].sb;
   cout << endl << endl << endl << "---------------------------------------------------------------" << endl << endl;
  }

  goto Povtor;
 }
 break;
 case 3:
 {
  ResPov:

  cout << "Уточните, что именно вы хотите сделать?" << endl;
  cout << " 1.Добавить студентов\n 2.Удалить студентов\n 3.Изменить информацию о студентах\n 4.Отмена\n";
  int Red;
  cin >> Red;
    switch (Red)
    {
     case 1:
      {
      shablon();

      //cout << ks;
      cout << "Хорошо, какое количество студентов вы хотите добавить?\nСейчас число студентов---"<<ks<<endl;
      int DobStud;
      cin >> DobStud;
      ks += DobStud;
      cout << "Последняя просьба. Не пропускайте строки, в крайнем случае оставьте строку пустой.\nЗакончите работу-закройте файл..."<<endl<<endl;
      system("res.txt");
      //cout << ks;
      cout << "Закончили?"<<endl<<endl;
      goto Povtor;
      }
      break;
     case 2:
      {
      shablon();
      cout << "Хорошо, какое количество студентов вы хотeли бы удалить?\nСейчас число студентов---" << ks << endl;
      int UdStud;
      cin >> UdStud;
      ks -= UdStud;
      cout << "Последняя просьба. Не пропускайте строки, в крайнем случае оставьте строку пустой.\nЗакончите работу-закройте файл..." << endl << endl;
      system("res.txt");
      //cout << ks;
      cout << "Закончили?" << endl << endl;
      system("pause");
      goto Povtor;
      }
      break;
     case 3:
      {
      shablon();
      MDA:
      cout << "Изменение информации о студентах-это не изменение их количества!!! Это замена информации на другую, эквивалентную ей.\n";
      cout << "Вы именно этого хотели?\n 1.Да, продолжить.\n 2.Нет, вернуться обратно.\n";
      int ponimanie;
      cin >> ponimanie;
      switch (ponimanie)
       {
       case 1:
        {
        cout << "Хорошо, последняя просьба. Не пропускайте строки, в крайнем случае оставьте строку пустой.\nЗакончите работу-закройте файл..." << endl << endl;
        system("res.txt");
        //cout << ks;
        cout << "Закончили?" << endl << endl;
        goto Povtor;
        }
        break;
       case 2:
        {
        goto ResPov;
        }
        break;
       default:
        goto MDA;
       }
      }
      break;
     case 4:
      goto Povtor;
     default:
      goto ResPov;
    }
  goto Povtor;
 }
 case 2:
 {
  cout << "Информация обо всех студентах:" << endl << endl;
  ifstream fin("res.txt");
  if (!fin.is_open()) // если файл не открыт
   cout << "Файл не может быть открыт!\n";
  char namee[50], group[10], fiz[15], math[15], srbull[15];
  for (i = 1; i <= ks; i++)
  {
   fin >> namee;
   fin >> group;
   fin >> fiz;
   fin >> math;
   fin >> srbull;
   int numG = atoi(group);
   cout << endl << "Имя студента:  " << namee;
   cout << endl << "Номер группы:  " << numG;
   cout << endl << "Оценка по математике:  " << math;
   cout << endl << "Оценка по физике:  " << fiz;
   cout << endl << "Средний балл:  " << srbull;
   cout << endl << endl << endl << "---------------------------------------------------------------" << endl << endl;
  }

  goto Povtor;
 }
 break;
 default:
 {
  goto Povtor;
 }
 }
 return 0;
}
