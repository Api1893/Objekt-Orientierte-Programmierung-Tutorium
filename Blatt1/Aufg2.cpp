#include <iostream>

void sortThree(int* a, int* b, int* c)
{
    int number_a = *a;
    std::cout << number_a << std::endl;
    // std::cout << a << " " << b << " " << c << std::endl;
}

int main()
{
    std::cout << "Programm start..." << std::endl;
    int x=7, y=3, z=5;
    sortThree(&x, &y, &z);
    std::cout << "Programm ende..." << std::endl;
}