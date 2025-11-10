#include <iostream>//to accept 10 nos to display maximum

using namespace std;

int main() {
    int num;
    int max_num;
    int count = 0;

    cout << "Please enter 10 numbers to find the maximum." << endl;

    do {
        cout << "Enter number " << count + 1 << ": ";
        cin >> num;
        if (count == 0) {
            max_num = num;
        } else {
            if (num > max_num) {
                max_num = num;
            }
        }
        count++;
    } while (count < 10);

    cout << "The maximum number is: " << max_num << endl;

    return 0;
}
