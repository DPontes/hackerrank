#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    long occur = 0;
    char item = 'a';
    if( n % s.size() == 0) occur = (n / s.size()) * count(s.begin(), s.end(), item);
    else {
        occur = (n / s.size()) * count(s.begin(), s.end(), item);
        int extra =  n % s.size();
        occur += count(s.begin(), s.begin() + extra, item);
    }
    return occur;
}

int main () {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);
    cout << result << endl;
    fout.close();

    return 0;
}
