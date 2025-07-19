#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name, grade;
    int age, roll_no;
};

int main(){
    Student* S = new Student;
    (*S).name = "Ujjwal";
    cout << (*S).name << endl;

    S->name = "Tony";
    S->age = 56;
    cout << S->name << endl << S->age << endl;

    delete S;
}