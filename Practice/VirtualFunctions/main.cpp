#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    cin >> n;
    Person *per[n];

    for (int i = 0; i < n; ++i) {
        cin >> val;
        if (val == 1) {
            // If val is 1, current object is of type Professor
            per[i] = new Professor;
        } else {
            per[i] = new Student;
        }
        per[i]->getdata();
    }

    for (int i = 0; i < n; ++i) {
        per[i]->putdata();
    }

    return 0;
}
