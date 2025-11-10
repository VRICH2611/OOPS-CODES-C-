#include <iostream>//accept string from user and copy with another string

using namespace std;

int main() {
    char source[100];
    char destination[100];
    cout << "Enter a string to copy: ";
    cin.getline(source, 100);
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    cout << "The original string is: " << source << endl;
    cout << "The copied string is: " << destination << endl;
    return 0;
}
