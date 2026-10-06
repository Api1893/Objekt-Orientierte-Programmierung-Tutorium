#include<iostream>

int *reversed(const int numbers[], int size) {

    int *neueReihenfolge = new int[size];

    for (int i = 0; i < 5; i++) {
        neueReihenfolge[i] = numbers[size - 1 - i];
    }
    return neueReihenfolge;
}

int main() {
    std::cout << "Programm start..." << std::endl;

    int numbers[] = {1, 2, 3, 4, 5};

    int *result = reversed(numbers, 5);

    for(int i = 0; i < 5; i++) {
        std::cout << result[i] << " ";
    }

    std::cout << std::endl;

    delete[] result;

    std::cout << "Programm ende..." << std::endl;
}