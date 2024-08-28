#include <iostream>
using namespace std;

char toLowerCase(char c) {
    return c ^ (1 << 5); 
}

int main() {
    char u = 'A';
    cout << "Lower case of " << u << " is " << toLowerCase(u);
    return 0;
}