#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base()" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Dervied()" << endl;
    }
};

int main() {
    Derived d;
}

