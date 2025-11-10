#include <iostream>// to accept 10 nos and prime number
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++) {
        int n = a[i], f = 1;
        if (n <= 1) f = 0;
        for (int j = 2; j * j <= n; j++) if (n % j == 0) f = 0;
        if (f) cout << n << " ";
    }
    return 0;
}
