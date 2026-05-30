#pragma once

class Cube {
private:
    float side;
    float mass;

public:
    Cube(float s, float m);

    float surfaceArea();
    float volume();
    float density();
};
