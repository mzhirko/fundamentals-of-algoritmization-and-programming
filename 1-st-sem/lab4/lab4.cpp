//---------------------------------------------------------------------------

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vcl.h>
#include <math.h>
#pragma hdrstop

double factorial (int n);

double YFunction (double x);

double resultFunction(double x, double y);
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
     // a value
    double a = 0;

    // b value
    double b = 0;

    double s = 0, y = 0, result = 0;

    int n = 0;

    double x = 0, h = 0;

    puts("Input interval range [a;b].");
    puts("Input value left range a: ");
    scanf("%lf", &a);

    puts("Input value right range b: ");
    scanf("%lf", &b);

    puts("Input iteration step h: ");
    scanf("%lf", &h);

    puts("Input iteration count n: ");
    scanf("%d", &n);

    printf("Range [a;b] = [%8.llf;%8.4lf]\n", a, b );
    printf("Step h = %8.4lf\n", h);
    printf("Count n = %8.4lf\n", n);

    printf("Results \n") ;


    for(x = a ; x <= b; x = x + h) {

        for(int k = 0; k <= n; k = k + 1) {
           s = s + cos(k * x)/ factorial(k);
        }

        //y = pow(exp(1), cos(x)) + cos(sin(x));
        y = YFunction(x);

        //result = fabs(y - s);
        result = resultFunction(y, s);

        printf("s(%8.4lf) = %8.4lf y(%8.4lf) = %8.4lf result = %8.4lf \n", x, s, y, x, result);
    }

    puts("\nPress any key ... ");
    getch();

    return 0;
}
//---------------------------------------------------------------------------
double factorial (int n) {
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
/////////////////////////
double YFunction(double x) {

    return pow(exp(1), cos(x)) + cos(sin(x));

}
//////////////////////
double resultFunction(double x, double y) {

    return fabs(x-y);

}

