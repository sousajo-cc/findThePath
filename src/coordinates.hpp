#ifndef FINDTHEPATH_COORDINATES_HPP
#define FINDTHEPATH_COORDINATES_HPP

struct Coordinates {
    int x{};
    int y{};

    [[nodiscard]] double distanceTo(Coordinates const &other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }

    bool operator==(Coordinates const &c1) const {
        return (x == c1.x && y == c1.y);
    }
};

#endif// FINDTHEPATH_COORDINATES_HPP
