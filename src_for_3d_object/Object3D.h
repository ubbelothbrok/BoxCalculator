#pragma once

class Object3D {
private:
    float width;
    float height;
    float depth;
    float mass;

public:
    Object3D(float w, float h, float d, float m);

    float surfaceArea() const;
    float volume() const;
    float density() const; // mass per unit volume
};
