#include <iostream>
#include <cmath>
using namespace std;

void calculateCube(double side) {
    double area = 6 * pow(side, 2);
    double volume = pow(side, 3);
    cout << "\nCube:\n";
    cout << "Surface Area: " << area << " square units\n";
    cout << "Volume: " << volume << " cubic units\n";
}

void calculateSphere(double radius) {
    double area = 4 * M_PI * pow(radius, 2);
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    cout << "\nSphere:\n";
    cout << "Surface Area: " << area << " square units\n";
    cout << "Volume: " << volume << " cubic units\n";
}

void calculateCylinder(double radius, double height) {
    double area = 2 * M_PI * radius * (radius + height);
    double volume = M_PI * pow(radius, 2) * height;
    cout << "\nCylinder:\n";
    cout << "Surface Area: " << area << " square units\n";
    cout << "Volume: " << volume << " cubic units\n";
}

int main() {
    int choice;
    cout << "Welcome to the Shape Area and Volume Calculator!\n";
    cout << "Select a shape to calculate:\n";
    cout << "1. Cube\n";
    cout << "2. Sphere\n";
    cout << "3. Cylinder\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double side;
            cout << "Enter the side length of the cube: ";
            cin >> side;
            calculateCube(side);
            break;
        }
        case 2: {
            double radius;
            cout << "Enter the radius of the sphere: ";
            cin >> radius;
            calculateSphere(radius);
            break;
        }
        case 3: {
            double radius, height;
            cout << "Enter the radius of the cylinder: ";
            cin >> radius;
            cout << "Enter the height of the cylinder: ";
            cin >> height;
            calculateCylinder(radius, height);
            break;
        }
        default:
            cout << "Invalid choice. Please restart the program and choose a valid option.\n";
    }

    return 0;
}
