#include <iostream>
#include "mycalc.h"
using namespace std;


int main()
{
    double (*ptrcalc)(double, double);
    double num1,num2;
    char op;
    cout << "please input 2 numbers" << endl;
    cin >> num1 >> num2;
    cout << "please input +-*/" << endl;
    cin >> op;
    switch(op)
    {
    case '+':
        ptrcalc = addition;
        break;
    case '-':
        ptrcalc = substraction;
        break;
    case '*':
        ptrcalc = mutiplication;
        break;
    case '/':
        ptrcalc = division;
        break;
    }
    print_result(ptrcalc, num1, num2);
}



/*
int sum (int, int);
int main()
{
    int result = sum(5,6);
    cout << "½á¹ûÎª£º" << result <<endl;
    return 0;
}

int sum(int num1, int num2)
{
    int result=num1+num2;
    return result;
}
*/
