#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a = 5, b = 9;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b;
    return 0;
}