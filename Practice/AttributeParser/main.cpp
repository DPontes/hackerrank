#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <sstream>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n_lines, n_queries;
    map <string, string> attributeDB;
    string inputstr, tag_preamble="";

    cin >> n_lines >> n_queries;
    cin.ignore();

    for(int i=0; i < n_lines;i++) {
        getline(cin, inputstr);

        // for each HRML line, break it up into token words
        stringstream ss(inputstr);
        string word, attribute, value;
        size_t pos;

        while(getline(ss, word, ' ')) { // for each token word
            // tag detected -> adjust tag_preamble by +/- tag
            if(word[0] == '<') {
                string tag;
                if(word[1] == '/') { // tag is closing
                    tag=word.substr(2);
                    tag=tag.substr(0, tag.length()-1); // get rid of '>'
                    pos=tag_preamble.find("."+tag);
                    if (pos==string::npos) tag_preamble="";
                    else tag_preamble=tag_preamble.substr(0,pos);
                }
                else { // it's tag opening
                    tag=word.substr(1);
                    if (tag.find(">") != string::npos) {
                        tag = tag.substr(0, tag.length()-1); // rid of ">"
                    }
                    if (tag_preamble=="") {
                        tag_preamble = tag;
                    }
                    else {
                        tag_preamble=tag_preamble+"."+tag;
                    }
                }
            }

            // value detected
            else if (word[0] == '"') {
                pos = word.find_last_of('"');
                value=word.substr(1,pos-1);
                attributeDB[attribute] = value; // insert into DB
            }

            // attribute name detected
            else if (word[0] != '=') {
                attribute = tag_preamble + "~" + word;
            }
        }

    }

    // process queries
    for(int i =0; i<n_queries;i++) {
        getline(cin,inputstr);
        if(attributeDB.find(inputstr) == attributeDB.end()) {
            cout << "Not Found!" << endl;
        } else {
            cout << attributeDB[inputstr] << endl;
        }
    }

    return 0;
}

