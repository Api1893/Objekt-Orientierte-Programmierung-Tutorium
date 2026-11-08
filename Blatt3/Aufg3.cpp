#include <iostream>
#include <cassert>
#include <string>
#include "Position.h"

namespace hfu {
    // --------- Aufgabe 3 b) ----------------
    // String vergleichen
    void stringCompare(const std::string& text1, const std::string& text2) {
        std::cout << (text1 == text2) << std::endl;   // 0: nicht gleich
        std::cout << (text1 < text2) << std::endl;    // 1: "E" kommt vor "Z"
        std::cout << (text1 > text2) << std::endl;    // 0

        assert(text1 != text2);
        assert(text1 < text2);
        assert(text1.compare(text2) < 0);
        assert(text2.compare(text1) > 0);
        assert(text1.compare(text1) == 0);

        assert(std::string("Zordor") < std::string("mordor"));  // Gross vor Klein
        assert(std::string("Mord") < std::string("Mordor"));    // kürzer kommt zuerst
    }

    // --------- Tests Aufgabe 3 ----------------
    void task3() {
        std::cout << "----------- Aufgabe 3 b) --------------" << std::endl;
        std::string text1 = "Erster_Vergleich";
        std::string text2 = "Zweiter_Vergleich";

        hfu::stringCompare(text1, text2);

        std::cout << "----------- Aufgabe 3 c) --------------" << std::endl;
        // position kam vorher aus Aufgabe 2 b) und wird hier neu angelegt
        std::string mordor = "Mordor";
        hfu::Position position(mordor, 47, 11);

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
    }
}
