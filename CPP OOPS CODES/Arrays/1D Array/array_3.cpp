#include <iostream>// to accept 10 nos and count 2 digit even number
using namespace std;

int main() {
    int a[10], c = 0;
    for (int i = 0; i < 10; i++) cin >> a[i];
    for (int i = 0; i < 10; i++) if (a[i] >= 10 && a[i] <= 99 && a[i] % 2 == 0) c++;
    cout << c;
    return 0;
}
