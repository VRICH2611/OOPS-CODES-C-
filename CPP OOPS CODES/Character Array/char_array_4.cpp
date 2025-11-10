#include <iostream>//accept string from user and count the word

using namespace std;

int main() {
    char str[100];
    int count = 0;
    bool in_word = false;
    cout << "Enter a string to count the words: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            in_word = false;
        } else if (in_word == false) {
            in_word = true;
            count++;
        }
    }
    cout << "The number of words is: " << count << endl;
    return 0;
}
