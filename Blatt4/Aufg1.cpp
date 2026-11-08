#include <iostream>
#include <cassert>
#include <stdexcept>

namespace hfu {
    // --------- Aufgabe 1 ----------------
    int gcd(int v, int w){
        if (v == 0 && w == 0) throw std::invalid_argument ("v und w kann nicht 0 sein");
        while(w != 0){
            int old_w = w;
            w = v % w;
            v = old_w;
        }
        return std::abs(v);
    }

    // --------- Tests Aufgabe 1 ----------------
    void task1() {
        std::cout << "----------- Aufgabe 1 a)--------------" << std::endl;
        std::cout << hfu::gcd(0, 2) << std::endl;
        //std::cout << "Laut der Mathematik ist ggt von 0, 0 nicht definiert" << std::endl;

        std::cout << "----------- Aufgabe 1 b)--------------" << std::endl;
        // if-Abfrage mit throw hinzugefügt
        std::cout << "Nun wird bei gcd(0,0) eine Fehlermeldung ausgegeben" << std::endl;

        std::cout << "----------- Aufgabe 1 c)--------------" << std::endl;
        bool exceptionHelper = false;
        // Das catch(...) steht für Catch-All-Handler
        try {
            std::cout << hfu::gcd(0, 0) << std::endl;
        } catch (...) {
            std::cout << "Fehler der ggt Eingabe..." << std::endl;
            exceptionHelper = true;
        }
        assert((exceptionHelper) == true);
    }
}
