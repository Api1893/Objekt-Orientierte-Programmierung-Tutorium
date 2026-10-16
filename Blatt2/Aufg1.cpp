/*
    Zeiger durch referenz ersetzten
*/
#include <iostream>
#include <cassert>

void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void sortThree(int& a, int& b, int& c)
{
    if (a > b) {
        swap(a, b);
    }

    if (a > c) {
        swap(a, c);
    }

    if (b > c) {
        swap(b, c);
    }
}

int main()
{
    std::cout << "Programm start..." << std::endl;
    int x = 10, y = 23, z = 5;

    sortThree(x, y, z);

    assert(x <= y && y <= z);
    
    std::cout << x << " " << y << " " << z << std::endl;
    std::cout << "Programm ende..." << std::endl;
}