#include <iostream>//to accept a string from user and reverse it and display
#include <cstring>

using namespace std;

int main() {
    char str[100];
    cout << "Enter a string to reverse it: ";
    cin.getline(str, 100);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    cout << "The reversed string is: " << str << endl;
    return 0;
}
