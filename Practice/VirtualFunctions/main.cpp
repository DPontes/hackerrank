#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
 public:
    int64_t age;
    string name;
    virtual void getdata() { cin >> this->name >> this-> age; }
    virtual void putdata() { cout << this->name << " " << this->age << endl; }
};


class Professor : public Person {
 public:
    Professor() { this->cur_id = ++id; }
    int64_t cur_id;
    int64_t publications;
    static int64_t id;
    void getdata() { cin >> this->name >> this->age >> this->publications; }
    void putdata() { cout << this->name << " "
                          << this->age << " "
                          << this->publications << " "
                          << cur_id << endl;
    }
};
int64_t Professor::id = 0;


class Student : public Person {
    const int64_t NumOfMarks = 6;
    int64_t marksSum = 0;
 public:
    Student() { this->cur_id = ++id; }
    static int64_t id;
    int64_t cur_id;
    vector<int64_t> marks;
    void getdata() {
        cin >> this-> name >> this->age;
        int64_t mark;
        for (int i = 0; i < NumOfMarks; ++i) {
            cin >> mark;
            marks.push_back(mark);
        }
    }
    void putdata() {
        for (auto& n : marks) marksSum += n;
        cout << this->name << " "
             << this->age << " "
             << marksSum << " "
             << this->cur_id << endl;
    }
};
int64_t Student::id = 0;


int main() {
    int n, val;
    cin >> n;
    Person *per[n];

    for (int i = 0; i < n; ++i) {
        cin >> val;
        if (val == 1) {
            // If val is 1, current object is of type Professor
            per[i] = new Professor;
        } else {
            per[i] = new Student;
        }
        per[i]->getdata();
    }

    for (int i = 0; i < n; ++i) {
        per[i]->putdata();
    }

    return 0;
}
