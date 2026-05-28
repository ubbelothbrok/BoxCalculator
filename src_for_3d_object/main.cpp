#include "Object3D.h"
#include <iostream>

using namespace std;

int main() {
    float w, h, d, m;
    cout << "Enter 3D object dimensions and mass (width height depth mass): \n";
    cin >> w >> h >> d >> m;

    Object3D obj(w, h, d, m);
    cout << "\n--- 3D Object Info ---\n";
    cout << "Surface Area: " << obj.surfaceArea() << "\n";
    cout << "Volume:       " << obj.volume() << "\n";
    cout << "Density:      " << obj.density() << "\n";

    return 0;
}
