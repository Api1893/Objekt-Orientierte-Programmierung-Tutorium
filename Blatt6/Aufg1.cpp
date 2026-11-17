#include <iostream>
#include <string>
#include <cassert>
#include <exception>
#include "City.h"

void testCity();

namespace hfu {
    void task1() {
        std::cout << "--------- Aufgabe 1 ----------------" << std::endl;
        // Test in City umändern, so dass es geht

        City city("Mordor", 47, 11, nullptr, 0);
        assert(city.getNumberOfPOIs() == 0);

        try {
            City city("Mordor", 47, 11, nullptr, 23);


            assert(false);

        } catch (...) {

        }

        /*  Leeres POIs wird übergeben
        City empty("Mordor", 47, 11);
        assert(empty.getNumberOfPOIs() == 0);
        */
    }
}