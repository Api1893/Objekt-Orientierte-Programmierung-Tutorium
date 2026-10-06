#include <iostream>

void sortThree(int *a, int *b, int *c)
{
    // std::cout << number_a << std::endl;

    if (*a > *b)
    {
        std::swap(*a, *b);
    }

    if (*a > *c)
    {
        std::swap(*a, *c);
    }

    if (*b > *c)
    {
        std::swap(*b, *c);
    }

    std::cout << *a << " " << *b << " " << *c << std::endl;
}

int main()
{
    std::cout << "Programm start..." << std::endl;

    int x = 10, y = 23, z = 5;
    sortThree(&x, &y, &z);
    std::cout << "Programm ende..." << std::endl;
}