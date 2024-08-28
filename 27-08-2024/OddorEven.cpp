#include <iostream>
using namespace std;

bool isOdd(int n) {
    return n & 1;
}

int main() {
    int n = 29;
    isOdd(n) ? cout << "Odd" : cout << "Even";
    return 0;
}