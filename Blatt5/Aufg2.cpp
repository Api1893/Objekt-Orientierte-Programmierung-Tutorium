#include <iostream>

void task2();

namespace hfu {
    void task2() {
        std::cout << "--------- Aufgabe 2 ----------------" << std::endl;
        std::cout << "Ein eigener Kopierkonstruktor ist nicht notwendig, da die Member von Class Position" << std::endl;
        std::cout << "x, y, name keine Zeiger auf selbst angelegte Daten." << std::endl;
        std::cout << "Der Compiler erzeugt daher bereits eine unabhängige Kopie." << std::endl;
        std::cout << "Beispiel: In City steht const Position position; und im Konstruktor : position(position) " << std::endl;
        std::cout << "Damit wird automatisch Kopierkonstruktor von Position aufgerufen." << std::endl;
    }
}
