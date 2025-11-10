#include <iostream>//accept three numbers and display minimum number

int main() {
    int n1, n2, n3;

    std::cout << "Enter the first number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;
    std::cout << "Enter the third number: ";
    std::cin >> n3;

    if (n1 <= n2 && n1 <= n3) {
        std::cout << "The minimum number is: " << n1 << std::endl;
    } else if (n2 <= n1 && n2 <= n3) {
        std::cout << "The minimum number is: " << n2 << std::endl;
    } else {
        std::cout << "The minimum number is: " << n3 << std::endl;
    }

    return 0;
}