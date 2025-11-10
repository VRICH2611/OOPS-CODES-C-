#include <iostream>// calc length of string

using namespace std;

int main() {
    char str[100];
    int length = 0;
    cout << "Enter a string to calculate its length: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    cout << "The length of the string is: " << length << endl;
    return 0;
}
