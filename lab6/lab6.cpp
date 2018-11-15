//---------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>

#pragma hdrstop

//---------------------------------------------------------------------------
#define MAXSIZE 255

#pragma argsused
int main(int argc, char* argv[])
{

   int dataArray[MAXSIZE][MAXSIZE] = {{0},{0}};



   int rowCount = 5;
   int columnCount = 5;
   //scanf

   printf("Source array\n", rowCount, columnCount);
   for(int i = 0; i < rowCount; i++) {
       for(int j = 0; j < columnCount; j++) {
           dataArray[i][j]=rand()%100;
           printf("%4ld ", dataArray[i][j]);
       }
       printf("\n");
   }

   printf("\n\n Analysed array:\n");
   for(int i = 0; i < rowCount; i++) {
       for(int j = 0; j < columnCount; j++) {

           if ((j > 0) && (j < columnCount)) {
              if( (dataArray[i][j-1] < dataArray[i][j]) && (dataArray[i][j] < dataArray[i][j+1])) {
                  printf(" [%2ld]", dataArray[i][j]);
              }
              else {
                 printf("%4ld ", dataArray[i][j]);
              }
           }
           else {
               printf("%4ld ", dataArray[i][j]);
           }
       }
       printf("\n");
   }


    printf("\n\n");
    getch();
    return 0;
}
//---------------------------------------------------------------------------
