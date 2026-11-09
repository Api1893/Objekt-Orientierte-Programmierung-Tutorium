#include <iostream>

void testCity();

namespace hfu {
    void task1() {
        std::cout << "--------- Aufgabe 1 a) ----------------" << std::endl;
        std::cout << "Alten Konstruktor durch den neuen Konstruktor ersetzt" << std::endl;

        // --------- Aufgabe 1 b) ----------------
        std::cout << "--------- Aufgabe 1 b) ----------------" << std::endl;
        testCity();
        /*
         * Der neue Konstruktor wurde erstellt.
         * CreatePosition kann weg, da es manuell gegeben wird.
         *
         * Auch das auto position = createPosition() kann weg. Da es mit der manuellen Eingabe die Parameter
         * in die Konstruktorverkettung gibt und der gibt es weiter an den alten Konstruktor.
         */
    }
}