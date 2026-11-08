#include <iostream>
#include "Position.h"

namespace hfu {
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

    // --------- Tests Aufgabe 4 ----------------
    void task4() {
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
}
