//
// Created by Apisit on 30.10.2026.
//

#ifndef OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H
#define OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H

#endif //OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_CITY_H

namespace hfu {
    // jede Stadt hat einen Namen
    std::string getName() {};

    // jede Stadt hat eine x-Koordinate
    int getX(){};

    // jede Stadt hat eine y-Koordinate
    int getY(){};

    // jede Stadt hat Sehenswürdigkeiten (Points of Interest), auf die man zugreifen kann
    int getPOI(int i) {};

    // jede Stadt hat Sehenswürdigkeiten (Points of Interest), die man ändern kann
    int setPOI(int i, ???){}

    // es gibt je Stadt eine bestimmte Zahl an Sehenswürdigkeiten.
    int getNumberOfPOIs(){};

    class City {
    private:


    public:
        City(const std::string& position, int[] pois);

    };

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
}