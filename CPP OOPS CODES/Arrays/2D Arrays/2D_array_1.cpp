//1) print 3x3 matrix of 00,01,02,10,11,12,20,21,22 and:

//A) add,display & sum

//B) count all positive & negative

//C) display maximum num

//D) count all prime

//E) palindrome

//F) Armstrong

//G) sum of each row

//H) display sum of all diagonal

//I) transpose

//J) sort in asc order
#include <iostream>

using namespace std;

int main() {
    int arr[3][3];
    cout << "The 3x3 matrix with indices as elements is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] = i * 10 + j;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
