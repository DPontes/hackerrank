#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
 private:
    static int load;
 public:
    static int compute(int64_t A, int64_t B) {
        load += 1;
        if (A < 0) { throw std::invalid_argument("A is negative"); }
        vector<int> v(A, 0);
        int real = -1, cmplx = sqrt(-1);
        if (B == 0) throw 0;
        real = (A/B) * real;
        int ans = v.at(B);
        return real + A - B * ans;
    }
    static int getLoad() {
        return load;
    }
};

int Server::load = 0;

int main() {
    int T; cin >> T;
    while (T--) {
        uint64_t A, B;
        cin >> A >> B;

        try {
            cout << Server::compute(A, B) << endl;
        }
        catch (bad_alloc& error) {
            cout << "Not enough memory" << endl;
        }
        catch (exception& error) {
            cout << "Exception: " << error.what() << endl;
        }
        catch (...) {
            cout << "Other exception" << endl;
        }
    }

    cout << Server::getLoad() << endl;
    return 0;
}
