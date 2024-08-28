#include <iostream>
using namespace std;

bool isPowOf2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    cin >> n; 
    if(isPowOf2(n))
    cout << "true";
    else
    cout << "false";
    return 0;
}