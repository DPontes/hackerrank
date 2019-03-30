#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n_integers, query, value;
    vector<int> v;

    cin >> n_integers;

    for(int i = 0; i < n_integers; i++) {
        cin >> value;
        v.push_back(value);
    }

    cin >> query;
   
    while(cin >> query) {
        find(v.begin(), v.end(), query) != v.end() ? cout << "Yes " : cout << "No ";
        cout << (lower_bound(v.begin(), v.end(), query) + 1 - v.begin()) << endl;
    }
    return 0;
}
