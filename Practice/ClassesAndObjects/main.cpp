#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write solution here

int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];

    for(int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate Kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than Kristen
    int count = 0;
    for(int i = 1; i < n;i++) {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score) {
            count++;
        }
    }

    cout << count;

    return 0;
}
