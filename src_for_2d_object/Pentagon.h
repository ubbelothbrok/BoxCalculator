#pragma once

class Pentagon {
private:
    float side;
    float mass;

public:
    Pentagon(float s, float m);

    float area() const;
    float perimeter() const;
    float areaDensity() const;
};
