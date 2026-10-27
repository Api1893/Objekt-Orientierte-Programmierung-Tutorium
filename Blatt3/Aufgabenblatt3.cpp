/*
* Alle Namen, die in Ihrem Code auftreten sind einfache und klare englische Begriffe.
* Überhaupt sollte Ihr Code klar und einfach sein. Gehen Sie davon aus, dass es eine
* einfache und klare Lösung gibt. So sind lange if-else-Kaskaden sicher nicht nötig.
*/

#include <iostream>
#include <cassert>
#include <string>
#import "variables.h"

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
            if (x != other.x) {
                std::cout << "test1" << std::endl;
                return -1;
            }

            if (y != other.y) {
                std::cout << "test" << std::endl;

                return -1;
            }

            if (name != other.name) {
                std::cout << getName() << std::endl;
                std::cout << name << std::endl;
                return -1;
            }

            return 1;
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
    std::cout << mordor + " Test Ausgabe fuer Index 0" << std::endl;
    assert(position.getName() == "Mordor");

    std::cout << "----------- Aufgabe 3 b) --------------" << std::endl;
    std::string text1 = "Erster_Vergleich";
    std::string text2 = "Zweiter_Vergleich";

    hfu::stringCompare(text1, text2);

    std::cout << "----------- Aufgabe 3 c) --------------" << std::endl;
    std::string mordor1 = "Mordor";
    hfu::Position position1(mordor1, 47, 11);
    //assert(position1.compare(position) == 0);

    hfu::Position position_name("zordor", 47, 11);
    hfu::Position position_x1(mordor1, 48, 11);
    hfu::Position position_y1(mordor1, 47, 12);
    assert(position.compare(position_name) < 0);
    assert(position.compare(position_x1) < 0);
    assert(position.compare(position_y1) < 0);
    assert(position_name.compare(position1)>0);
    assert(position_x1.compare(position1)>0);
    assert(position_y1.compare(position1)>0);
}