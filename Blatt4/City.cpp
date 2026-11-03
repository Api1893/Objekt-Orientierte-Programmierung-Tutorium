#include "City.h"
#include "Position.h"

namespace hfu {
    City::City(Position position, std::string *list, int numberOfList): position(position), index(numberOfList){
        initCity(list);
    }

    void City::initCity(std::string *list) {
        this -> numberOfList = new std::string[index];
        for (int i = 0; i < this -> index; i++) {
            this -> numberOfList[i] = numberOfList[i];
        }
    }

    void City::setPOI(int i, std::string newPois) const {
        this -> numberOfList[i] = newPois;
    }

    int City::getX() const {
        return this -> position.getX();
    }

    std::string City::getName() const {
        return this -> position.getName();
    }

    int City::getY() const {
        return this -> position.getY();
    }

    std::string City::getPOI(int i) const {
        return numberOfList[i];
    }

    int City::getNumberOfPOIs() const {
        return this -> index;
    }
}
