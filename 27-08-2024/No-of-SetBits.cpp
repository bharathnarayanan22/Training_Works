#include <iostream>
using namespace std;
int count(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main() {
    int n = 29;
    cout << "Number of set bits in " << n << " is " << count(n) << endl; 
    return 0;
}