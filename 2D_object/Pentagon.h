#pragma once

class Pentagon {
private:
    float side;
    float mass;

public:
    Pentagon(float s, float m);

    float area();
    float perimeter();
    float areaDensity();
};
