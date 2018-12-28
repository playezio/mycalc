#ifndef MYCALC_H_INCLUDED
#define MYCALC_H_INCLUDED
#include <iostream>
using namespace std;
double addition (double, double);
double substraction (double, double);
double mutiplication (double, double);
double division (double, double);

void print_result(double (*)(double, double), double, double);
void print_result(double (*ptrcalc)(double, double), double num1, double num2)
{
    double result = ptrcalc(num1, num2);
    cout << "result is:" << result << endl;
}

double addition (double num1, double num2)
{
    return num1 + num2;
}
double substraction (double num1, double num2)
{
    return num1 - num2;
}
double mutiplication (double num1, double num2)
{
    return num1 * num2;
}
double division (double num1, double num2)
{
    if(num2==0){
        cout << " cant be 0" << endl;
        return 0;
    }
    return num1 / num2;
}
#endif // MYCALC_H_INCLUDED
