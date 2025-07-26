#include <iostream>
using namespace std;

class Human{
    string religion, color;
    protected:
    string name = "Ujjwal";
    int age = 22, weight;
};

class Student: private Human{
    int rollNumber, fees;

    public:
    Student(string name, int age, int weight, int rollNumber, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->rollNumber = rollNumber;
        this->fees = fees;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
        cout << "RollNo: " << rollNumber << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main(){
    Student A("Ujjwal", 22, 64, 311, 100000);
    A.display();
}