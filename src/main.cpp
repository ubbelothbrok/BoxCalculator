#include "box.h"
#include <iostream>

int main() {
    float length, width, height, weight;

    // Ask the user to provide the dimensions and weight
    std::cout << "Enter the length of the box: ";
    std::cin >> length;
    
    std::cout << "Enter the width of the box: ";
    std::cin >> width;
    
    std::cout << "Enter the height of the box: ";
    std::cin >> height;
    
    std::cout << "Enter the weight of the box: ";
    std::cin >> weight;

    // Create the Box object
    Box myBox(length, width, height, weight);

    // Output the calculated area and volume
    std::cout << "\n--- Box Calculations ---\n" << std::endl;
    std::cout << "Surface Area: " << myBox.calcArea() << std::endl;
    std::cout << "Volume:       " << myBox.calcVolume() << std::endl;
    std::cout << "Weight:       " << myBox.getWeight() << std::endl;

    return 0;
}
