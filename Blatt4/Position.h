#ifndef OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_POSITION_H
#define OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_POSITION_H

#include <string>
#include <iostream>

namespace hfu{
    class Position {
    private:
        int x;
        int y;
        std::string name;
    public:
        Position (const std::string& name, int x, int y);
        int getX() const;
        int getY() const;
        const std::string& getName() const;
        int compare(const Position& other) const;
    };
}


#endif //OBJEKT_ORIENTIERTE_PROGRAMMIERUNG_TUTORIUM_POSITION_H
