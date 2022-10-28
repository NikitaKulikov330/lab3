#include "calculator.h"
#include <iostream>

int main()
{
    std::cout <<"Lab3 Example";
    return 0;
}

int Calculator::Add (double a, double b)
{
    return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
