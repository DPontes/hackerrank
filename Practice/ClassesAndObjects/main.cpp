#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
    private:
        int scores;
    public:
        void input() {
            int value;
            for(int i = 0; i < 5; i++) {
                cin >> value;
                scores += value;
            }
        }
        int calculateTotalScore() { return scores; }
};

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
