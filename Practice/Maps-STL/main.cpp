#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    map<string, int>marks;
    int n_queries, grade, action;
    string name;

    cin >> n_queries;

    for(int i=0; i<n_queries; i++) {
        cin >> action >> name;
        switch(action) {
            case 1:
                cin >> grade;
                marks[name] += grade;
                break;
            case 2:
                marks.erase(name);
                break;
            case 3:
                cout << marks[name] << endl;
                break;
        }
    }

    return 0;
}
