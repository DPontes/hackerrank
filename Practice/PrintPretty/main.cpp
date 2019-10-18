#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

using std::string;
using std::cout;
using std::cin;
using std::hex;
using std::endl;
using std::setw;
using std::ios;
using std::internal;
using std::stringstream;
using std::string;
using std::setprecision;
using std::streamsize;
using std::fixed;
using std::scientific;

string Dec2Hex(double A) {
    stringstream ss;
    ss << hex << int(A);
    string res ( ss.str() );

    return res;
}

string signaledAndPadded(double B) {
    stringstream ss;
    string sign;

    B > 0 ? sign = "+" : sign = "-";
    ss << fixed << setprecision(2) << B;
    string res( ss.str() );
    int numDashes(15 - res.length() - 2);
    res = string(numDashes, '_') + sign + res;

    return res;
}

string Dec2Scientific(double C) {
    stringstream ss;

    ss << scientific << setprecision(9) << C;
    string res( ss.str() );

    return res;
}

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    double A;
    double B;
    double C;

    while (T--) {
        cin >> A;
        cin >> B;
        cin >> C;

    cout << "\n0x" << Dec2Hex(A) << "\n" << signaledAndPadded(B) << "\n" << Dec2Scientific(C) << endl;
    }

    return 0;
}

