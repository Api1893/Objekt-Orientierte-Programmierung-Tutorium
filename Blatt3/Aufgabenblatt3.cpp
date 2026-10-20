/*
* Alle Namen, die in Ihrem Code auftreten sind einfache und klare englische Begriffe.
* Überhaupt sollte Ihr Code klar und einfach sein. Gehen Sie davon aus, dass es eine
* einfache und klare Lösung gibt. So sind lange if-else-Kaskaden sicher nicht nötig.
*/

#include <iostream>
namespace hfu{
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

    }
}

int main() {
    std::cout << "----------- Aufgabe 1 a) ----------------" << std::endl;
    int numbers[5] = {5,4,3,1,9};
    int size = 5;
    // size notwendig, damit der Konstruktor weiß wie lang das Array ist
    // Wegen dem Speicherlokation muss mitgeteilt werden wie viel Platz reserviert werden muss

    int* result = hfu::copy(numbers, size);

    for (int i = 0; i < size; i++) {
        std::cout << result[i] << std::endl;
    }
    delete[] result;

    std::cout << "----------- Aufgabe 1 b) --------------" << std::endl;

}

