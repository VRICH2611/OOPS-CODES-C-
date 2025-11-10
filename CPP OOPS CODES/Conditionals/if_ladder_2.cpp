#include <iostream>//accept 2 numbers and accept a choice

int main() {
    double num1, num2;
    char choice;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> choice;

    if (choice == '+') {
        std::cout << "Result: " << num1 + num2 << std::endl;
    } else if (choice == '-') {
        std::cout << "Result: " << num1 - num2 << std::endl;
    } else if (choice == '*') {
        std::cout << "Result: " << num1 * num2 << std::endl;
    } else if (choice == '/') {
        if (num2 != 0) {
            std::cout << "Result: " << num1 / num2 << std::endl;
        } else {
            std::cout << "Error: ZeroDivisionError." << std::endl;
        }
    } else {
        std::cout << "Invalid operator choice." << std::endl;
    }

    return 0;
}