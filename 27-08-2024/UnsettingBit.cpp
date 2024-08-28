#include <iostream>
using namespace std;

int unset(int n, int i) {
    return n & ~(1 << i);
}

int main() {
    int n = 29;
    int bp = 3;
    cout << "Number after unsetting the " << bp << "th bit in " << n << " is " << unset(n, bp);
    return 0;
}