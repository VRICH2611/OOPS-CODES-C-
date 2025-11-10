#include <iostream>//to accept 10 nos and palindrome
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++) {
        int n = a[i], r = 0, t = n;
        while (t > 0) {
            r = r * 10 + t % 10;
            t /= 10;
        }
        if (r == n) cout << n << " ";
    }
    return 0;
}
