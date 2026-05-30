#pragma once

class Cuboid {
private:
    float width;
    float height;
    float depth;
    float mass;

public:
    Cuboid(float w, float h, float d, float m);

    float surfaceArea();
    float volume();
    float density();
};
