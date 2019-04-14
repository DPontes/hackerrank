#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    vector<int> totalHG;
    for (int j = 0; j < 4; ++j) {
        for(int i = 0; i < 4; ++i) {
            int total = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            total += arr[i+1][j+1];
            total += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            totalHG.push_back(total);
        }
    }

    return  *max_element(totalHG.begin(), totalHG.end());
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    fout.close();

    return 0;
}

