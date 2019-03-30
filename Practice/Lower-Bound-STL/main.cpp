#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n_integers, n_queries, query;
    vector<int> v;

    cin >> n_integers;

    for(int i = 0; i<n_integers;i++) {
        int value;
        cin >> value;
        v.push_back(value);
    }

    cin >> n_queries;
    vector<int>::iterator low;
   
    for (int i = 0; i < n_queries; i++) {
        cin >> query;
        low = lower_bound(v.begin(), v.end(), query);
        if(find(v.begin(), v.end(), query) != v.end()) {
            cout << "Yes ";
        } else {
            cout << "No ";
        }
        cout << (low - v.begin() + 1) << endl;
    }
    return 0;
}
