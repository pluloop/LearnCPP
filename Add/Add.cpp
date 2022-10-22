#include <iostream>
#include "Add.h"

int Add()
{
    std::cout << "Enter an integer, press space, and enter another integer: ";
    int x{}, y{};
    std::cin >> x >> y;

    return x + y;
}