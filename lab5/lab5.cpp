//---------------------------------------------------------------------------

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vcl.h>
#include <math.h>

#include <vector.h>


#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
    int inputVal = 0;
    int arraySize = 0;

    printf("Input array size: ");
    scanf("%d", &arraySize);

    DynamicArray<int> arrayOfInt;
    arrayOfInt.Length = arraySize;
//------------------------------------------------------------------------
    printf("type 0(automatic) or 1(manual) to choose the way you want to fill array: \n");
    scanf("%d", &inputVal);

    if ( inputVal == 1 ) {

    printf("Manual array input.\n");
    for (int i = 0; i <= arrayOfInt.Length - 1; i++) {
        printf("arrayOfInt[%d] = ", i);
        scanf("%d", &arrayOfInt[i]);
    }

    printf("Manual array content.\n");
    for (int i = 0; i <= arrayOfInt.Length - 1; i++) {
        printf("arrayOfInt[%d] = %d\n", i, arrayOfInt[i]);
    }
    }
    if ( inputVal == 0 ) {

        printf("Random array content.\n");
        for (int i = 0; i <= arrayOfInt.Length - 1; i++) {
        arrayOfInt[i] = (rand()%100)+1;
        printf("arrayOfInt[%d] = %d\n", i, arrayOfInt[i]);
        }
    }
//---------------------------------------------------------------------------
    // accumulation multiplication value
    int multResult = 1;

    enum stateType {
            successful,
            inProgress,
            oneZeroVal,
            initial
        };

    stateType state = initial;

    printf("Multiplication between 0's elements.\n");

    for (int i = 0; i <= arrayOfInt.Length - 1; i++) {

        if ( (arrayOfInt[i] == 0) && (state == initial)) {
            printf("Started multiptication from index %d\n", i);
            state = inProgress;
            continue;
        }

        if ( (arrayOfInt[i] == 0) && (state == inProgress)) {
            printf("Stoped multiptication on index %d\n", i);
            state = successful;
            break;
        }

        multResult = multResult * arrayOfInt[i];

        if ((i == (arrayOfInt.Length - 1)) && (state == inProgress)) {
            state = oneZeroVal;
        }

    }

    switch (state) {

    case oneZeroVal: {
        printf("Only one zero value\n");
        break;
        }

    case initial: {
        printf("No values with zero\n");
        break;
        }

    case successful: {
        printf("Multiplication result: %d\n", multResult);
        break;
        }

    default: {
        printf("Issue in state machine...");
        break;
        }
    }
    
    getch();

    return 0;
}

