#include <iostream>
#include <vector>
using namespace std;
vector<vector<char>> genSubsets(vector<char>& arr) {
    vector<vector<char>> subsets;
    int n = arr.size();
    for (int i = 0; i < (1 << n); ++i) { 
        vector<char> subset;
        for (int j = 0; j < n; ++j) 
            if (i & (1 << j)) subset.push_back(arr[j]);
        subsets.push_back(subset);
    }
    return subsets;
}
int main() {
    vector<char> arr = {'a', 'b', 'c'};
    vector<vector<char>> subsets = genSubsets(arr);
    cout << "All possible subsets:" << endl;
    for (auto subset : subsets) {  
        cout << "{ ";
        for (char ch : subset)  
            cout << ch << " ";
        cout << "}" << endl;
    }
    return 0;
}