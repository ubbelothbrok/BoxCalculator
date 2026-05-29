#pragma once

class Triangle {
private:
    float base;
    float height;
    float mass;

public:
    Triangle(float b, float h, float m);

    float area() const;
    float perimeter() const;
    float areaDensity() const;
};
