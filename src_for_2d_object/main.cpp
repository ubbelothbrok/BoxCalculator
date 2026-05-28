#include "Object2D.h"
#include <iostream>

using namespace std;

int main() {
    float w, h, m;
    cout << "Enter 2D object dimensions and mass (width height mass): \n";
    cin >> w >> h >> m;

    Object2D obj(w, h, m);
    cout << "\n--- 2D Object Info ---\n";
    cout << "Area:         " << obj.area() << "\n";
    cout << "Perimeter:    " << obj.perimeter() << "\n";
    cout << "Area Density: " << obj.areaDensity() << "\n";

    return 0;
}



