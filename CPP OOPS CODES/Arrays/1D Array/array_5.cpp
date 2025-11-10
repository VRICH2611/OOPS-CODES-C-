#include <iostream>// to accept 10 nos and Armstrong number
#include <cmath>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++) {
        int n = a[i], s = 0, d = 0, t = n;
        while (t > 0) {
            d++;
            t /= 10;
        }
        t = n;
        while (t > 0) {
            int r = t % 10;
            s += pow(r, d);
            t /= 10;
        }
        if (s == n) cout << n << " ";
    }
    return 0;
}
