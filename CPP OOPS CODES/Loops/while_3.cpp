#include <iostream>//to accept 10 nos in loop n display sum of all
using namespace std;

int main() {
    int i = 1, n, sum = 0;
    while (i <= 10) {
        cin >> n;
        sum += n;
        i++;
    }
    cout << sum;
    return 0;
}
