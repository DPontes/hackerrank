#include <iostream>
#include <iomanip>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::ios;
using std::internal;


int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

    cout << "\n0x" << A << "\n" << B << "\n" << C << endl;
    }
    return 0;
}
