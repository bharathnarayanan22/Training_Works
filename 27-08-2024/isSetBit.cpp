#include <iostream>
using namespace std;

bool is_ith_bit_set(int n, int i) {
    return (n & (1 << i)) != 0;
}

int main() {
    int n = 29;
    int bp = 3;
    if(is_ith_bit_set(n, bp))
    cout << "true";
    else
    cout << "false";

    return 0;
}