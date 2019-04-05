#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> values;
    string value;
    stringstream ss(str);
    while(getline(ss, value, ',')) {
        values.push_back(stoi(value));
    }
    return values;
}
