#include <iostream>
#include <cassert>
#include <string>

class Position {
    private:
        int x;
        int y;
        std::string name;

    public:
        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        const std::string& getName() const {
            return name;
        }

        void set(const std::string& name, int x, int y) {
            this -> x = x;
            this -> y = y;
            this -> name = name;
        }
};

int main() {
    std::cout << "Programm start..." << std::endl;

    Position mordor;
    mordor.set("Mordor", 3, 4);

    assert(mordor.getX() == 3);
    assert(mordor.getY() == 4);
    assert(mordor.getName() == "Mordor");

    std::cout << "Programm ende..." << std::endl;
}