//---------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>

#pragma hdrstop

#pragma argsused

// Initialize 2D array (array of array) 
int** init2dArray(int rows, int columns) {

    int **p2dArray = new int* [rows];

    for(int i=0; i<rows; i++) {
        p2dArray[i] = new int[columns];
    }

    return p2dArray;
}

//delete 2d array
void delete2dArray(int** p2dArray, int rows, int columns) {

    for(int i=0; i<rows; i++) {
        delete []  p2dArray[i];
    }

    delete [] p2dArray;
}

int main(int argc, char* argv[])
{

   int rowCount = 0;
   int columnCount = 0;

   printf("Input rows: ");
   scanf("%d", &rowCount);

   printf("Input columns: ");
   scanf("%d", &columnCount);

   int **dataArray = init2dArray(rowCount, columnCount);

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


    printf("\n");
    delete2dArray(dataArray, rowCount, columnCount);
    getch();
    return 0;
}
//---------------------------------------------------------------------------
