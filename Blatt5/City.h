#ifndef OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H
#define OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H

#include <string>
#include "Position.h"

namespace hfu {
    class City {
    private:
        // Aufgabe 5 den alten Konstruktor private machen
        City(Position position, std::string* list, int numberOfList);
        const Position position;
        std::string* pois;
        int count;  // Anzahl der Sehenswürdigkeiten
        std::string* initCity(std::string* list, int numberOfList);
        void checkIndex(int i) const;

    public:
        City(const std::string& name, int x, int y, std::string* pois, int length);
        // jede Stadt hat einen Namen
        std::string getName() const;
        // jede Stadt hat eine x-Koordinate
        int getX() const;
        // jede Stadt hat eine y-Koordinate
        int getY() const;
        // jede Stadt hat Sehenswürdigkeiten (Points of Interest), auf die man zugreifen kann
        std::string getPOI(int i) const;
        // jede Stadt hat Sehenswürdigkeiten (Points of Interest), die man ändern kann
        void setPOI(int i, std::string newPois) const;
        // es gibt je Stadt eine bestimmte Zahl an Sehenswürdigkeiten.
        int getNumberOfPOIs() const;
    };
}
#endif // OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H