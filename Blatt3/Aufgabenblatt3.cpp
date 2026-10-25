/*
* Alle Namen, die in Ihrem Code auftreten sind einfache und klare englische Begriffe.
* Überhaupt sollte Ihr Code klar und einfach sein. Gehen Sie davon aus, dass es eine
* einfache und klare Lösung gibt. So sind lange if-else-Kaskaden sicher nicht nötig.
*/

#include <iostream>
#include <cassert>
#include <string>

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
        for(int i = 0; i + 1 < size; i++) {
            assert(sorted[i] <= sorted[i + 1]);
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
        sort(numbers, size);

        for(int i = 0; i + 1 < size; i++) {
            assert(numbers[i] <= numbers[i + 1]);
        }

        // Vergleich
        compare(numbers, original, size);
        delete[] original;
    }

    // --------- Aufgabe 1 d) ----------------
    // Gleicher Namensmethode möglich, durch Überladung
    void test_sort() {
        int firstArray[5] = {1,2,3,4,5};
        int secondArray[5] = {5,4,3,2,1};
        int thirdArray[5] = {3,-1,8,-6,2};
        int fourthArray[5] = {7,3,5,2};
        int size = 5;

        test_sort(firstArray, size);
        test_sort(secondArray, size);
        test_sort(thirdArray, size);
        test_sort(fourthArray, size);
    }

    class Position {
    private:
        int x;
        int y;
        std::string name;

    public:
        // Konstruktor von Aufgabe 2 a)
        Position (const std::string& name, int x, int y) : name(name), x(x), y(y) {}

        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        const std::string& getName() const {
            return name;
        }
    };
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
    delete[] result;

    std::cout << "----------- Aufgabe 1 b) --------------" << std::endl;
    int numbersNotSorted[6] = {2,1,5,4,8};
    int sizeToCompare = 6;
    int numbersSorted[6] = {1,2,3,4,5,8};
    hfu::compare(numbersSorted, numbersNotSorted, sizeToCompare);

    std::cout << "----------- Aufgabe 1 c) --------------" << std::endl;
    hfu::test_sort(numbers, size);
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << std::endl;
    }

    std::cout << "----------- Aufgabe 1 d) --------------" << std::endl;
    hfu::test_sort();

    std::cout << "----------- Aufgabe 2 b) --------------" << std::endl;
    std::string mordor = "Mordor";
    hfu::Position position(mordor, 47, 11);
    assert(position.getName() == mordor);
    assert(position.getX() == 47);
    assert(position.getY() == 11);

    /* Die Variable wird nicht geändert, da es auf die Kopie eines Objekt zugreift.
     * Also Position.getName(). Zudem muss es vor hfu::Position initialisiert werden.
     * Eine andere Möglichkeit wäre es als Referenz zu übergeben. */
    mordor[0] = 'X';
    std::cout << mordor << std::endl;
    assert(position.getName() == "Mordor");
}

