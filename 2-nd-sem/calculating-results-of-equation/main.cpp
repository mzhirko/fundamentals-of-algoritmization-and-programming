#include <iostream>
#include <math.h>

using namespace std;
double Cut(double x0, double x1, double e);
double Function(double x);

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Функция: ln(x)-5*cos(x)" << endl;
    double a = 1, b = 8, h = 1, x, xstr, y, eps;
    cout << "Введите eps: ";
    cin >> eps;
    for (x = a; x < b; x += h)
    {
        if (Function(x)*Function(x + h) < 0)
        {

            xstr = Cut(x, x + h, eps);
            y = Function(xstr);

            printf("x =  %3.5lf  ", xstr);
            printf("y = %1.10lf", y);
            cout << endl;
        }
    }
    return 0;
}

double Cut(double x0, double x1, double e)
{
    double t;
    while (fabs(x1 - x0) > e)
    {
        t = x1;
        x1 = x1 - (x1 - x0)*Function(x1) / (Function(x1) - Function(x0));
        x0 = t;
    }
    return x1;
}

double Function(double x)
{
    double y;
    y = log(x) - 5 * cos(x);
    return y;
}
