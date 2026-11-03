#include "Position.h"

namespace hfu {
    Position::Position(const std::string& name, int x, int y) : name(name), x(x), y(y) {
    }

    int Position::getX() const {
        return x;
    }

    int Position::getY() const {
        return y;
    }

    const std::string& Position::getName() const {
        return name;
    }

    int Position::compare(const Position& other) const {
        if (name < other.name) return -1;
        if (name > other.name) return 1;
        if (x != other.x) return x - other.x;
        return y - other.y;
    }
}