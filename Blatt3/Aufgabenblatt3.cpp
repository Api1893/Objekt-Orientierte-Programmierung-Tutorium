/*
* Alle Namen, die in Ihrem Code auftreten sind einfache und klare englische Begriffe.
* Überhaupt sollte Ihr Code klar und einfach sein. Gehen Sie davon aus, dass es eine
* einfache und klare Lösung gibt. So sind lange if-else-Kaskaden sicher nicht nötig.
*/

#include <iostream>
#include <cassert>
namespace hfu {
    // ------------- Aufgabe 1 a) -----------------
    int* copy(int* numbers, int size) {
        int* copyArray = new int[size];

        for (int i = 0; i < size; i++) {
            copyArray[i] = numbers[i];
            //std::cout << copyArray[i] << std::endl;
        }
        return copyArray;
    }

    // --------- Aufgabe 1 b) ----------------
    void compare(int* sorted, int* numbers, int size) {
        for(int i = 0; i < size; i++) {
            if (sorted[i] == numbers[i]) {
                assert(sorted[i] == numbers[i]);
            }
        }
    }

    // --------- Aufgabe 1 c) ----------------
    void sort(int* numbers, int size) {
        for (int i = 1; i < size; ++i) {
            int key = numbers[i];
            int j = i - 1;
            while (j >= 0 && numbers[j] > key) {
                numbers[j + 1] = numbers[j];
                j = j - 1;
            }
            numbers[j + 1] = key;
        }
    }

    void test_sort(int* numbers, int size) {
        int* original = copy(numbers, size);

        for(int i = 1; i < size; i++) {
            if (original[i] <= original[i + 1]) {
                assert("Sortier-Methode nicht richtig implementert");
                i++;
            }
        }
    }
}

int main() {
    std::cout << "----------- Aufgabe 1 a) ----------------" << std::endl;
    int numbers[5] = {5,3,4,1,9};
    int size = 5;
    // size notwendig, damit der Konstruktor weiß wie lang das Array ist
    // Wegen dem Speicherlokation muss mitgeteilt werden wie viel Platz reserviert werden muss

    int* result = hfu::copy(numbers, size);

    for (int i = 0; i < size; i++) {
        std::cout << result[i] << std::endl;
    }

    hfu::test_sort(result, 5);
    delete[] result;

    std::cout << "----------- Aufgabe 1 b) --------------" << std::endl;
    int numbersNotSorted[6] = {2,1,5,4,8};
    int sizeToCompare = 6;
    int numbersSorted[6] = {1,2,3,4,5,8};
    hfu::compare(numbersSorted, numbersNotSorted, sizeToCompare);

    std::cout << "----------- Aufgabe 1 c) --------------" << std::endl;
    hfu::sort(numbers, size);
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << std::endl;
    }

    std::cout << "----------- Aufgabe 2 a) --------------" << std::endl;
}

