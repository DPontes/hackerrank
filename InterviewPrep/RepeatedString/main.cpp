#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    
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
    fout.close()

    return 0;
}
