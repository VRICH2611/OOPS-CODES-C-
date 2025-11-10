#include <iostream>// to accept 10 nos and count all perfect numbers
using namespace std;

int main() {
    int a[10], c = 0;
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++) {
        int sum = 0;
        for (int j = 1; j < a[i]; j++) if (a[i] % j == 0) sum += j;
        if (sum == a[i]) c++;
    }
    cout << c;
    return 0;
}
