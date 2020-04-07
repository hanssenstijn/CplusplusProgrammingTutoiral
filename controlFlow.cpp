#include <iostream>
#include <string>

int main()
{
    // First example:

    // std::cout << "How old are you?: ";
    // int age;
    // std::cin >> age;
    // if (age < 13)
    // {
    //     std::cout << "You're not old enough\n";
    // }
    // else if (age < 19)
    // {
    //     std::cout << "You'r close to 19\n";
    // }
    // else
    // {
    //     std::cout << "You'r old enough\n";
    // }
    // std::cout << "Always";

    // Second example:

    std::string name_answer = "Caleb";
    int age_answer = 63;

    std::string name_guess;
    std::cout << "Guess my name : ";
    std::cin >> name_guess;

    int age_guess;
    std::cout << "Guess my age : ";
    std::cin >> age_guess;

    // && this is what actually happens
    if (name_guess == name_answer)
    {
        if (age_guess == age_answer)
        {
            std::cout << "You got it right!";
        }
    }

    // return stops the program
    return 0;
}
