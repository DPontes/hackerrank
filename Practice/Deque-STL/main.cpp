#include <iostream>
#include <dqueue>
using namespace std;

void printKMax(int arr[], int n, int k) {
    
}

int main() {
    int t;
    cin >> t;
    while(t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
