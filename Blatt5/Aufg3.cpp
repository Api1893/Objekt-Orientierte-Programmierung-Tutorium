#include <iostream>

void task3();

namespace hfu {
    void task3() {
        std::cout << "-------------- Aufgabe 3 ----------------" << std::endl;
        std::cout << "Für die Klasse Position ist kein Destruktor notwendig, weil Position" << std::endl;
        std::cout << "keinen speicher mit new Array anlegt." << std::endl;
        std::cout << "----------------------------------------------------------" << std::endl;
        std::cout << "Für die Klasse City ist es hingegen notwendig," << std::endl;
        std::cout << "weil im initCity ein neues Array mit new std::string[] angelegt wird." << std::endl;
        std::cout << "Weshalb es mit delete[] freigegeben werden muss." << std::endl;
        std::cout << "Da es sonst zu einem Memory leak käme." << std::endl;
    }
}
