
// program to perform given operations using pointers:
// Fibonacci
// Palindrome
// Prime / Composite
// Perfect number
// Odd & Even
// Min & Max
// Factorial
// Square number / Square root
// Cube / Cube root
// Word count
// Reverse string
// Copy string
// String length

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// Function prototypes
void fibonacci(int *n);
bool isPalindrome(char *str);
bool isPrime(int *n);
bool isPerfect(int *n);
void oddEven(int *n);
void minMax(int *a, int *b);
long long factorial(int *n);
bool isComposite(int *n);
bool isSquareNumber(int *n);
double squareRoot(double *n);
double cube(double *n);
double cubeRoot(double *n);
int wordCount(char *str);
void reverseString(char *str);
void copyString(char *src, char *dest);
int stringLength(char *str);

int main() {
    int choice;
    cout << "\n===== POINTER BASED MULTI-FUNCTION PROGRAM =====\n";
    cout << "1. Fibonacci\n2. Palindrome\n3. Prime\n4. Perfect\n5. Odd/Even\n6. Min & Max\n";
    cout << "7. Factorial\n8. Composite\n9. Square Number\n10. Square Root\n11. Cube\n12. Cube Root\n";
    cout << "13. Word Count\n14. Reverse String\n15. Copy String\n16. Length of String\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    int n, a, b;
    char str[200], str2[200];
    double d;

    switch (choice) {
        case 1:
            cout << "Enter number of terms: ";
            cin >> n;
            fibonacci(&n);
            break;
        case 2:
            cout << "Enter a string: ";
            cin.getline(str, 200);
            cout << (isPalindrome(str) ? "Palindrome" : "Not Palindrome");
            break;
        case 3:
            cout << "Enter number: ";
            cin >> n;
            cout << (isPrime(&n) ? "Prime" : "Not Prime");
            break;

        case 4:
            cout << "Enter number: ";
            cin >> n;
            cout << (isPerfect(&n) ? "Perfect" : "Not Perfect");
            break;
        case 5:
            cout << "Enter number: ";
            cin >> n;
            oddEven(&n);
            break;
        case 6:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            minMax(&a, &b);
            break;
        case 7:
            cout << "Enter number: ";
            cin >> n;
            cout << "Factorial: " << factorial(&n);
            break;
        case 8:
            cout << "Enter number: ";
            cin >> n;
            cout << (isComposite(&n) ? "Composite" : "Not Composite");
            break;
        case 9:
            cout << "Enter number: ";
            cin >> n;
            cout << (isSquareNumber(&n) ? "Perfect Square" : "Not Perfect Square");
            break;
        case 10:
            cout << "Enter number: ";
            cin >> d;
            cout << "Square Root: " << squareRoot(&d);
            break;
        case 11:
            cout << "Enter number: ";
            cin >> d;
            cout << "Cube: " << cube(&d);
            break;
        case 12:
            cout << "Enter number: ";
            cin >> d;
            cout << "Cube Root: " << cubeRoot(&d);
            break;
        case 13:
            cout << "Enter a string: ";
            cin.getline(str, 200);
            cout << "Word count: " << wordCount(str);
            break;
        case 14:
            cout << "Enter a string: ";
            cin.getline(str, 200);
            reverseString(str);
            cout << "Reversed string: " << str;
            break;
        case 15:
            cout << "Enter a string: ";
            cin.getline(str, 200);
            copyString(str, str2);
            cout << "Copied string: " << str2;
            break;
        case 16:
            cout << "Enter a string: ";
            cin.getline(str, 200);
            cout << "Length: " << stringLength(str);
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}



void fibonacci(int *n) {
    int a = 0, b = 1, c;
    if (*n <= 0) return;
    cout << a << " ";
    if (*n == 1) return;
    cout << b << " ";
    for (int i = 2; i < *n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

bool isPalindrome(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end) {
        if (*start != *end)
            return false;
        start++;
        end--;
    }
    return true;
}

bool isPrime(int *n) {
    if (*n < 2) return false;
    for (int i = 2; i <= sqrt(*n); i++)
        if (*n % i == 0)
            return false;
    return true;
}

bool isPerfect(int *n) {
    int sum = 0;
    for (int i = 1; i < *n; i++)
        if (*n % i == 0)
            sum += i;
    return (sum == *n);
}

void oddEven(int *n) {
    if (*n % 2 == 0)
        cout << *n << " is Even";
    else
        cout << *n << " is Odd";
}

void minMax(int *a, int *b) {
    cout << "Min: " << (*a < *b ? *a : *b);
    cout << "\nMax: " << (*a > *b ? *a : *b);
}

long long factorial(int *n) {
    long long fact = 1;
    for (int i = 1; i <= *n; i++)
        fact *= i;
    return fact;
}

bool isComposite(int *n) {
    return (*n > 1 && !isPrime(n));
}

bool isSquareNumber(int *n) {
    int root = sqrt(*n);
    return (root * root == *n);
}

double squareRoot(double *n) {
    return sqrt(*n);
}

double cube(double *n) {
    return (*n) * (*n) * (*n);
}

double cubeRoot(double *n) {
    return cbrt(*n);
}

int wordCount(char *str) {
    int count = 0;
    bool inWord = false;
    while (*str) {
        if (*str != ' ' && *str != '\t' && *str != '\n') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
        str++;
    }
    return count;
}

void reverseString(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void copyString(char *src, char *dest) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int stringLength(char *str) {
    int len = 0;
    while (*str++) len++;
    return len;
}