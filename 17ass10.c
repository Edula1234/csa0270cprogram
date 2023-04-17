#include <iostream>
#include <cmath>

using namespace std;

// Define the union shape
union Shape {
    double radius;  // Circle's radius
    struct {
        double length;  // Rectangle's length
        double width;   // Rectangle's width
    } rectangle;
};

int main() {
    Shape shape;  // Declare a variable of type Shape
    
    // Prompt the user to enter the type of shape
    char choice;
    cout << "Enter shape (c for circle, r for rectangle): ";
    cin >> choice;
    
    // Based on user's choice, prompt for appropriate dimensions
    if (choice == 'c') {
        cout << "Enter circle's radius: ";
        cin >> shape.radius;
        // Calculate and print the area of the circle
        double area = M_PI * pow(shape.radius, 2);
        cout << "Area of the circle: " << area << endl;
    } else if (choice == 'r') {
        cout << "Enter rectangle's length: ";
        cin >> shape.rectangle.length;
        cout << "Enter rectangle's width: ";
        cin >> shape.rectangle.width;
        // Calculate and print the area of the rectangle
        double area = shape.rectangle.length * shape.rectangle.width;
        cout << "Area of the rectangle: " << area << endl;
    } else {
        cout << "Invalid choice. Exiting..." << endl;
    }

    return 0;
}
