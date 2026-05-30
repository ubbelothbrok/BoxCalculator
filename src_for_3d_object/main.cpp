#include "Cube.h"
#include "Cuboid.h"
#include <iostream>

using namespace std;

int main() {
    // Cube
    float cs = 5.0f, cm = 20.0f;
    Cube cube(cs, cm);
    cout << "Cube (side=" << cs << ", mass=" << cm << ")\n";
    cout << "  Surface Area: " << cube.surfaceArea() << "\n";
    cout << "  Volume:       " << cube.volume() << "\n";
    cout << "  Density:      " << cube.density() << "\n\n";

    // Cuboid
    float cw = 4.0f, ch = 5.0f, cd = 6.0f, cbm = 30.0f;
    Cuboid cuboid(cw, ch, cd, cbm);
    cout << "Cuboid (width=" << cw << ", height=" << ch << ", depth=" << cd << ", mass=" << cbm << ")\n";
    cout << "  Surface Area: " << cuboid.surfaceArea() << "\n";
    cout << "  Volume:       " << cuboid.volume() << "\n";
    cout << "  Density:      " << cuboid.density() << "\n\n";

    return 0;
}
