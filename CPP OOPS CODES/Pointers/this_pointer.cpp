//This pointer with operator overloading with all operators

#include <iostream>
#include <iterator>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        this->value = v;
    }

    void display() const {
        cout << "Value: " << this->value << endl;
    }

    Number operator+(const Number& other) const {
        Number temp;
        temp.value = this->value + other.value;
        return temp;
    }

    bool operator==(const Number& other) const {
        return this->value == other.value;
    }

    Number& operator=(const Number& other) {
        if (this != &other) { 
            this->value = other.value;
        }
        return *this;
    }

    Number& operator++() {
        ++this->value;
        return *this;
    }

    Number operator++(int) {
        Number temp = *this;
        this->value++;
        return temp;
    }
    
    friend ostream& operator<<(ostream& out, const Number& n);
    friend istream& operator>>(istream& in, Number& n);
};

ostream& operator<<(ostream& out, const Number& n) {
    out << n.value;
    return out;
}

istream& operator>>(istream& in, Number& n) {
    in >> n.value;
    return in;
}

int main() {
    Number n1(5), n2(10), n3;

    cout << "Enter value for n3: ";
    cin >> n3;

    cout << "\n--- Demonstrating operators ---\n";

    cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << endl;

    Number sum = n1 + n2;
    cout << "n1 + n2 = " << sum << endl;

    cout << "n1 == n2 ? " << (n1 == n2 ? "True" : "False") << endl;

    n3 = n1;
    cout << "After assignment n3 = n1, n3 = " << n3 << endl;

    cout << "Prefix ++n1 = " << ++n1 << endl;
    cout << "Postfix n1++ = " << n1++ << endl;
    cout << "After postfix, n1 = " << n1 << endl;

    return 0;
}