#include <iostream>
#include <cassert>
#include <string>
#include "Position.h"

namespace hfu {
    // --------- Tests Aufgabe 2 ----------------
    void task2() {
        std::cout << "----------- Aufgabe 2 b) --------------" << std::endl;
        std::string mordor = "Mordor";
        hfu::Position position(mordor, 47, 11);
        assert(position.getName() == mordor);
        assert(position.getX() == 47);
        assert(position.getY() == 11);

        /* Das Objekt speichert eine eigene Kopie des Namens (der Member ist std::string und kein Verweis)
         * Wenn sch die var außerhalb ändert. Ändert es nichts am Objekt.
         * Wenn man will, das sich es mit ändert, dann nimmt man Referenz. */
        mordor[0] = 'X';
        std::cout << mordor + " Test Ausgabe fuer Index 0" << std::endl;
        assert(position.getName() == "Mordor");
    }
}
