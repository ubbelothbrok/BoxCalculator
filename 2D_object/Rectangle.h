#pragma once

class Rectangle {
private:
    float width;
    float height;
    float mass;

public:
    Rectangle(float w, float h, float m);

    float area();
    float perimeter();
    float areaDensity();
};
