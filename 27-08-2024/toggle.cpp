#include <iostream>
using namespace std;

int toggle(int n, int i) {
    return n ^ (1 << i);
}

int main() {
    int n = 29;
    int bp = 2;
    cout << "Number after toggling the " << bp << "th bit in " << n << " is " << toggle(n, bp);
    return 0;
}