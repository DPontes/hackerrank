#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int v_length;
    vector<int> v{};

    cin >> v_length;

    for(int i = 0; i < v_length; i++) {
        int value;
        cin >> value;

        v.push_back(value);
    }

    int remove_this;
    int remove_that;

    cin >> remove_this;

    v.erase(v.begin()+remove_this-1);

    cin >> remove_this >> remove_that;

    v.erase(v.begin()+remove_this-1, v.begin()+remove_that-1);

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
