//
// Created by Apisit on 30.10.2026.
//

#ifndef OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H
#define OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H

#include <string>

namespace hfu {
    // ------------------------- Klasse Position ------------------------------
    class Position {
    private:
        int x;
        int y;
        std::string name;

    public:
        // Konstruktor von Aufgabe 2 a)
        Position (const std::string& name, int x, int y) : name(name), x(x), y(y) {}

        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        const std::string& getName() const {
            return name;
        }

        int compare(const Position& other) const {
            // other liefert Objekt im Klammern (position)
            // x oder nur getX() liefert Objekt vor dem (.), also Bsp. other.
            if (name < other.name) return -1;
            if (name > other.name)return 1;
            if (x != other.x) return x - other.x;
            if (y != other.y) return y - other.y;
            return 0;
        }
    };

    class City {
    private:
        Position position;
        std::string name;
        int numberOfPOIs;

    public:
        City(const Position& pos, std::string* name, int numberOfPOIs);

        // jede Stadt hat einen Namen
        std::string getName() const{
            return name;
        };

        // jede Stadt hat eine x-Koordinate
        int getX() const {
            return x;
        };

        // jede Stadt hat eine y-Koordinate
        int getY() {
            return y;
        };

        // jede Stadt hat Sehenswürdigkeiten (Points of Interest), auf die man zugreifen kann
        int getPOI(int i) {
            return i;
        };

        // jede Stadt hat Sehenswürdigkeiten (Points of Interest), die man ändern kann
        int setPOI(int i, ???){}

        // es gibt je Stadt eine bestimmte Zahl an Sehenswürdigkeiten.
        int getNumberOfPOIs() {
            return numberOfPoi;
        };
    };

}
#endif OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H