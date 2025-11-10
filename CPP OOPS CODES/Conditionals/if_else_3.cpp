#include <iostream>// accept four numbers from user and display maximum no

int main() {
    int a, b, c, d;
    std::cout << "Enter four numbers separated by spaces: ";
    std::cin >> a >> b >> c >> d;
    
    int max = a; 
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    
    std::cout << "The maximum number is: " << max << std::endl;
    
    return 0;
}