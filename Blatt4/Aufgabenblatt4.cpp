#include <iostream>
#include <cassert>

namespace hfu {
    int gcd(int v, int w){
        //if (v==0 && w==0) throw std::invalid_argument("arguments must not be equal zero");
        assert((v, w) == 0);
        while(w != 0){
            int old_w = w;
            w = v % w;
            v = old_w;
        }
        return std::abs(v);
    }
}

int main () {
    /*
    std::cout << "----------- Aufgabe 1 a)--------------" << std::endl;
    std::cout << hfu::gcd(0, 1) << std::endl;
    //std::cout << "Laut der Mathematik ist ggt von 0, 0 nicht definiert" << std::endl;

    std::cout << "----------- Aufgabe 1 b)--------------" << std::endl;
    std::cout << "Nun wird bei gcd(0,0) eine Fehlermeldung ausgegeben" << std::endl;
    */

    std::cout << "----------- Aufgabe 1 c)--------------" << std::endl;
    // Das catch(...) steht für Catch-All-Handler
    try {
        //std::cout << hfu::gcd(0, 0) << std::endl;
        assert(hfu::gcd(0, 0) == 0);

    } catch (...) {
        //std::cout << "call to gcd failed..." << std::endl;
    }
}