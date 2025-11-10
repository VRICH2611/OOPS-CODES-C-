#include <iostream> //1) Area of circle 2) Circumference of circle 3) Area of Triangle 4) Your choice
#include <cmath> 
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    cout << "Choose a geometric calculation:" << endl;
    cout << "1) Area of a circle" << endl;
    cout << "2) Circumference of a circle" << endl;
    cout << "3) Area of a triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: { 
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = PI * radius * radius;
            cout << "The area of the circle is: " << area << endl;
            break;
        }
        case 2: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double circumference = 2 * PI * radius;
            cout << "The circumference of the circle is: " << circumference << endl;
            break;
        }
        case 3: { 
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}