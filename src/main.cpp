#include "box.h"
#include <iostream>

using namespace std;

int main() {
    float length = 0, width = 0, height = 0, weight = 0;

    cout << "Enter box dimensions (length width height): ";
    cin >> length >> width >> height;
    
    cout << "Enter box weight: ";
    cin >> weight;

    Box box(length, width, height, weight);

    cout << "\n--- Box Info ---\n";
    cout << "Surface Area: " << box.calcArea() << "\n";
    cout << "Volume:       " << box.calcVolume() << "\n";
    cout << "Weight:       " << box.getWeight() << "\n";

    return 0;
}
