#include <iostream>
using namespace std;

int set(int n, int i) {
    return n | (1 << i);
}

int main() {
    int n = 29;
    int bp = 1;
    cout << "Number after setting the " << bp << "th bit in " << n << " is " << set(n, bp);
    return 0;
}