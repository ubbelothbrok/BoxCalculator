#pragma once

class Triangle {
private:
    float base;
    float height;
    float mass;

public:
    Triangle(float b, float h, float m);

    float area();
    float perimeter();
    float areaDensity();
};
