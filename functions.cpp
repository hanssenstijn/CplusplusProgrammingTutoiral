#include <iostream>
// for math functions
#include <cmath>

using std::cin;
using std::cout;

// define own function
double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    // declare 2 variables of the same type on the same line with a comma
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    double myPower = power(base, exponent);
    // double power = pow(base, exponent);
    // cout << power << std::endl;
    cout << myPower << std::endl;
}
