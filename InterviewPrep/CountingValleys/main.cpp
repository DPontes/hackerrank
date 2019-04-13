#include <bits/stdc++.h>
using namespace std;

int countingValleys(int n_steps, string s) {
    int n_valleys = 0, current_level = 0;
    for (auto c = s.begin(); c != s.end(); ++c) {
        if(*c == 'U') ++current_level;
        if(*c == 'D') --current_level;
        if(current_level == 0 && *c == 'U') ++n_valleys;
    }
    return n_valleys;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n_steps;
    cin >> n_steps;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n_steps, s);

    cout << result << endl;
    fout.close();

    return 0;
}
