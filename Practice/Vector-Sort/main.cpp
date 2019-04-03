#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> values;
    int value, n_integers;

    cin >> n_integers;
    for(int i=0; i < n_integers;i++) {
        cin >> value;
        values.push_back(value);
    }

    sort(values.begin(), values.end());
    for(auto a : values) { cout << a << " "; }
    return 0;
}
