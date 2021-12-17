#include <iostream>
#include <limits>
#include "funcs.h"

int main()
{
    short int input;
    long long int a, b, c;
    std::cin >> input;
    while (input >= 93 || input <= 0)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Incorrect number, try again" << std::endl;
        std::cin >> input;
    }
    a = cycleFib(input);
    std::cout << a << std::endl;
    b = formulaBine(input);
    std::cout << b << std::endl;
    c = recFib(input);
    std::cout << c << std::endl;


    return 0;
}