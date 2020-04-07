#include <string>
#include <iostream>

int main()
{
    std::string password = "hellotacos123";
    std::string guess;
    // do while -- do it atleast once
    do 
    {
std::cout << "Guess the password: ";
std::cin >> guess;
    } while(guess != password);

    // int factorial = 5;
    // int i = factorial -1;
    // while (i > 1)
    // {
    //     factorial *= i;
    //     i--;
    // }
    // std::cout << factorial << std::endl;

    // int fact = 5;
    // int factorial = fact;
    // for (int i = factorial-1; i > 1; i--)
    // {
    //     // ctrl+c to stop the loop if it ever keeps on running
    //     // std::endl for each on new line
    //     factorial = factorial * i;

    // }
    // std::cout << "factorial of " << fact << " : " << factorial << std::endl;
    // return is optional
    return 0;
}
