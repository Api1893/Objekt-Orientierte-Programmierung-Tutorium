//
// Created by skyto on 27.10.2026.
//

#include "Mitschrieb.h"
#include <iostream>

class Point {
private:
    int* coordinates;

    int* makePairs(int x, int y) {
        int* result = new int[2];
        result[0] = x;
        result[1] = y;
        return result;
    }

public:
    Point(int x, int y) : coordinates(makePairs(x,y)) {
    }

    // Oder über Other geht auch
    Point(const Point& other) :Point(other.get_x(), other.get_y()) {}

    int get_x() const {
        return coordinates[0];
    }

    int get_y() const {
        return coordinates[1];
    }

    void set_x(int x) {
        coordinates[0] = x;
    }
};

// Funktion
void dump(Point p) {
    std::cout << p.get_x() << " " << p.get_y() << std::endl;
}

int main() {
    Point p(47, 11);
    dump(p);
    Point& p_copy = p;  // Hier steht gleicher Zeiger drin
    p.set_x(23);
    std::cout << p.get_x() << " " << p_copy.get_x() << std::endl;
}