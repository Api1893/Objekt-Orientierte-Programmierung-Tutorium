/*
* Alle Namen, die in Ihrem Code auftreten sind einfache und klare englische Begriffe.
* Überhaupt sollte Ihr Code klar und einfach sein. Gehen Sie davon aus, dass es eine
* einfache und klare Lösung gibt. So sind lange if-else-Kaskaden sicher nicht nötig.
*/

#include <iostream>
#include <cassert>
#include <string>
#include "variables.h"

namespace hfu {
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

        int compare(const Position& other) const {
            // other liefert Objekt im Klammern (position)
            // x oder nur getX() liefert Objekt vor dem (.), also Bsp. other.
            if (name < other.name) return -1;
            if (name > other.name)return 1;
            if (x != other.x) return x - other.x;
            if (y != other.y) return y - other.y;
            return 0;
        }
    };

    // --------- Aufgabe 4 ----------------
    void sort(hfu::Position* position, int size) {
        for (int i = 1; i < size; i++) {
            hfu::Position key = position[i];
            int j = i - 1;
            while (j >= 0 && position[j].compare(key) > 0) {
                position[j + 1] = position[j];
                j = j - 1;
            }
            position[j + 1] = key;
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
    std::cout << mordor + " Test Ausgabe fuer Index 0" << std::endl;
    assert(position.getName() == "Mordor");

    std::cout << "----------- Aufgabe 3 b) --------------" << std::endl;
    std::string text1 = "Erster_Vergleich";
    std::string text2 = "Zweiter_Vergleich";

    hfu::stringCompare(text1, text2);

    std::cout << "----------- Aufgabe 3 c) --------------" << std::endl;
    std::string mordor1 = "Mordor";
    hfu::Position position1(mordor1, 47, 11);
    assert(position1.compare(position) == 0);

    hfu::Position position_name("Zordor", 47, 11);
    hfu::Position position_x1(mordor1, 48, 11);
    hfu::Position position_y1(mordor1, 47, 12);

    assert(position.compare(position_name) < 0);
    assert(position.compare(position_x1) < 0);
    assert(position.compare(position_y1) < 0);
    assert(position_name.compare(position1) > 0);
    assert(position_x1.compare(position1) > 0);
    assert(position_y1.compare(position1) > 0);

    //std::cout << ("M" < "Z") << std::endl;
    std::cout << "----------- Aufgabe 4 --------------" << std::endl;
    hfu::Position positions[3] {
        hfu::Position("Mordor", 5, 1),
        hfu::Position("Auenland", 2, 3),
        hfu::Position("Mordor", 1, 1)
    };
    hfu::sort(positions, 3);

    for (int i = 0; i < 3; i++) {
        std::cout << positions[i].getName() << positions[i].getX() << positions[i].getY() << std::endl;
    }
}