#pragma once

class Hexagon {
private:
    float side;
    float mass;

public:
    Hexagon(float s, float m);

    float area() const;
    float perimeter() const;
    float areaDensity() const;
};
