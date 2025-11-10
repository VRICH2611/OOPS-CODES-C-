#include <iostream>//accept 2 nos from user and display maximum no



int main() {
    int n1, n2;
    std::cout << "Enter the first number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;
    
    if (n1 > n2) {
        std::cout << "The maximum number is: " << n1 << std::endl;
    } else {
        std::cout << "The maximum number is: " << n2 << std::endl;
    }
    
    return 0;
}