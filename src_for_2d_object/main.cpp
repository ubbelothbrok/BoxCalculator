#include "Triangle.h"
#include "Rectangle.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include <iostream>

using namespace std;

int main() {
    // Triangle
    float tb = 5.0f, th = 4.0f, tm = 10.0f;
    Triangle tri(tb, th, tm);
    cout << "Triangle (base=" << tb << ", height=" << th << ", mass=" << tm << ")\n";
    cout << "  Area:         " << tri.area() << "\n";
    cout << "  Perimeter:    " << tri.perimeter() << "\n";
    cout << "  Area Density: " << tri.areaDensity() << "\n\n";

    // Rectangle
    float rw = 4.0f, rh = 6.0f, rm = 12.0f;
    Rectangle rect(rw, rh, rm);
    cout << "Rectangle (width=" << rw << ", height=" << rh << ", mass=" << rm << ")\n";
    cout << "  Area:         " << rect.area() << "\n";
    cout << "  Perimeter:    " << rect.perimeter() << "\n";
    cout << "  Area Density: " << rect.areaDensity() << "\n\n";

    // Pentagon
    float ps = 3.0f, pm = 8.0f;
    Pentagon pent(ps, pm);
    cout << "Pentagon (side=" << ps << ", mass=" << pm << ")\n";
    cout << "  Area:         " << pent.area() << "\n";
    cout << "  Perimeter:    " << pent.perimeter() << "\n";
    cout << "  Area Density: " << pent.areaDensity() << "\n\n";

    // Hexagon
    float hs = 4.0f, hm = 15.0f;
    Hexagon hex(hs, hm);
    cout << "Hexagon (side=" << hs << ", mass=" << hm << ")\n";
    cout << "  Area:         " << hex.area() << "\n";
    cout << "  Perimeter:    " << hex.perimeter() << "\n";
    cout << "  Area Density: " << hex.areaDensity() << "\n\n";

    return 0;
}
