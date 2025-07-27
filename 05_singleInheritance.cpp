#include <iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout << name << " " << age << endl;
    }
};

class Student: public Human{
    int rollNumber, fees;

    public:
    Student(string name, int age, int rollNumber, int fees): Human(name, age) // we can call parent's class contructor from here also
    {
        this->rollNumber = rollNumber;
        this->fees = fees;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "RollNo: " << rollNumber << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main(){
    Student A("Ujjwal", 22, 311, 100000);
    A.display();
}