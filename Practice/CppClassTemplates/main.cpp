#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#define concatenate add
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
/* The reason behind fast_io

There are quite a lot of I/O cin >> ..., cout <<... going on in the program.
This just make these faster.

The C++ cin, cout must sync with stdin and stdout, if you want to use all of them.
Here the latter are not used at all, so no need to sync with them.

cin, cout must also sync (be tied) with each other, to make interaction 
with user (to make sure the use can see all the result of cout, before a cin executes).
There is actually no interaction needed here, so this relation is also not need.

All these sync/tie takes time. As mosting of the time in this program is I/O
(cin and cout. the calculation actually would not take much time),
remove sync/tie can make this program run much faster.

For more details, check this: https://stackoverflow.com/a/31165481/1058916
*/
using namespace std;

template <class T> class AddElements {
    public:
        T element;
        AddElements(T arg) { element = arg; }
        T add(T x) { return element + x; }
};


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    cin >> n;
    for(i=0;i<n;i++) {
        string type;
        cin >> type;
        if(type=="float") {
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        } else if(type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        } else if(type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
