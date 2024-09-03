#include <iostream>
#include <vector>
using namespace std;
vector<int> findFactors(int n) {
    vector<int> factors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i * i != n ) factors.push_back(n / i);
        }
    }
    return factors;
}

int main() {
    int n = 36;
    vector<int> factors = findFactors(n);
    cout << "Factors of " << n << " are: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
