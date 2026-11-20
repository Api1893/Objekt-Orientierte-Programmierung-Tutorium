#include "City.h"
#include "Position.h"
#include <string>
#include <stdexcept>

namespace hfu {
    City::City(Position position, std::string* list, int numberOfList)
        :   position(position), pois(initCity(list, numberOfList)), count(numberOfList) {}

    // Neuer Konstruktor
    City::City(const std::string& name, int x, int y, std::string* pois, int length)
        :   City(Position(name, x, y), pois, length) {}

    // Kopierkonstruktor für Tiefenkopie über Konstruktoverkettung
    City::City(const City &other)
        : City(other.position, other.pois, other.count) {}

    std::string* City::initCity(std::string* list, int numberOfList) {
        if (list == nullptr && numberOfList > 0 || numberOfList < 0) {
            throw std::invalid_argument ("Fehlereingabe bei der initCity");
        }

        std::string* newList = new std::string[numberOfList];
        for (int j = 0; j < numberOfList; j++) {
            newList[j] = list[j];
        }
        return newList;
    }

    // Extra Konstruktor für 3 Eingaben
    City::City(const std::string& name, int x, int y)
    : City(name, x, y, nullptr, 0){}

    // Destruktor
    City::~City() {
        delete [] pois;
    }

    void City::setPOI(int i, std::string newPois) const {
        checkIndex(i);
        this -> pois[i] = newPois;
    }

    std::string City::getPOI(int i) const {
        checkIndex(i);
        return pois[i];
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

    int City::getNumberOfPOIs() const {
        return this -> count;
    }

    void City::checkIndex(int i) const{
        if (i >= this -> count || i < 0) throw std::invalid_argument ("Index außerhalb des Bereichs");
    }
}
