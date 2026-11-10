#include <iostream>
#include <cassert>
#include "City.h"

void task4();

namespace hfu {
    void task4() {
        std::cout << "--------- Aufgabe 4 ----------------" << std::endl;
        std::string pois[]={"Sauron", "Minas Morgul", "Orodruin"};
        // City bauen
        hfu::City mordor("Mordor", 47, 11, pois, 3);

        // Hier wird Kopiekonstruktor aufgerufen
        auto copy = mordor;

        // Jetzt das Original ändern
        mordor.setPOI(2,"Cirith Ungol");

        // Prüfen ob die Kopie unverändert geblieben ist
        assert(copy.getPOI(2) == "Orodruin");
        // So kann man gucken, ob der Kopierkonstruktor funktioniert

        std::cout << "Begründung:" << std::endl;
        std::cout << "Der Standard Konstruktor macht eine flache Kopie." << std::endl;
        std::cout << "Nur Zeiger pois, mordor und copy teilen sich das selbe Array." << std::endl;
        std::cout << "Deshalb eigener Kopierkonstruktor über eine Konstruktorverkettung anlegen" << std::endl;
    }
}