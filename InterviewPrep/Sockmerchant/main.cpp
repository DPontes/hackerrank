#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

vector<int> removeValue(vector<int> ar, int value) {
    for(int i = 0; i < ar.size(); ++i) {
        ar.erase(std::remove(ar.begin(), ar.end(), value), ar.end());
    }
    return ar;
}

// Only this function is part of the exercise
int sockMerchant(int ar_size, vector<int> ar) {
    int n_pairs = 0, value;
    while(ar.size() > 0) {
        value = *ar.begin();
        int n_values = count(ar.begin(), ar.end(), value);
        n_pairs += n_values / 2;
        ar = removeValue(ar, value);
    }
    return n_pairs;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split_string(ar_temp_temp);
    
    vector<int> ar(n);

    for(int i=0; i < n; i++) {
        int ar_item = stoi(ar_temp[i]);
        
        ar[i] = ar_item;
    }

    int result = sockMerchant(n, ar);
    cout << result << "\n";
    fout.close();
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(),\
                                      input_string.end(),\
                                      [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));
        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
