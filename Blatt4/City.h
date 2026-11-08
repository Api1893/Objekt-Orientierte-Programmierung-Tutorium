//
// Created by Apisit on 30.10.2026.
//
#ifndef OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H
#define OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H

#include <string>
#include "Position.h"

namespace hfu {
    class City {
    private:
        const Position position;
        std::string* pois;  // Kopierte Array
        int count;  // Anzahl der Sehenswürdigkeiten
        std::string* initCity(std::string* list, int numberOfList);
        void checkIndex(int i) const;

    public:
        City(Position position, std::string* list, int numberOfList);
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