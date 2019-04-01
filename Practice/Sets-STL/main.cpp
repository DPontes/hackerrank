#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n_queries, action, value;
    set<int> values;
    set<int>::iterator iter;

    cin >> n_queries;

    for(int i = 0; i < n_queries; i++) {
        cin >> action >> value;
        switch(action) {
            case 1:
                values.insert(value);
                break;
            case 2:
                values.erase(value);
                break;
            case 3:
                values.find(value) != values.end() ? cout << "Yes" : cout << "No";
                cout << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}
