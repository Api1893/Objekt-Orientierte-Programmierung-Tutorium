#ifndef POSITION_H
#define POSITION_H

#include <string>

namespace hfu {
    class Position {
    private:
        std::string name;
        int x;
        int y;

    public:
        Position(const std::string& name, int x, int y);

        int getX() const;
        int getY() const;
        const std::string& getName() const;

        int compare(const Position& other) const;
    };
}

#endif // POSITION_H