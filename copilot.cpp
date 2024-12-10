#include <iostream>

// Function to calculate the volume of a cuboid
int volume(int length = 2, int width = 3, int height = 4) {
    return length * width * height;
}

int main() {
    int userLength, userWidth, userHeight;

    // Get input from the user
    std::cout << "Enter length: ";
    std::cin >> userLength;
    std::cout << "Enter width: ";
    std::cin >> userWidth;
    std::cout << "Enter height: ";
    std::cin >> userHeight;

    // Calculate volume using user input or default values
    int result = volume(userLength, userWidth, userHeight);

    std::cout << "Volume of the cuboid: " << result << std::endl;

    return 0;
}
