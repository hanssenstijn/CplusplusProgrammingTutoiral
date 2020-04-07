#include <iostream>
#include <vector>

void print_vector(std::vector<int> data)
{
    for(int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
}

int main()
{
    int guesses[] = {10, 13, 21, 23, 25, 12};
    // std::cout <<  guesses[3];
    int size = sizeof(guesses) / sizeof(guesses[0]);
    std::cout << size;
    for (int i = 0; i < size; i++)
    {
        std::cout << guesses[i] << std::endl;
    }

    int arrayHolder[20]; // array has 20 spots

    std::vector<int> items = {1, 2, 3};
    items.push_back(100);
    std::cout << items[3];


print_vector(items);
    return 0; // stops the whole code
}
