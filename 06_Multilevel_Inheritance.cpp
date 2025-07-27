#include <iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:

    void introduce(){
        cout << "Hello my name is: " << name << endl;
    }
};

class Employee: public Person{
    protected:
    int salary;
    
    public:
    
    void Monthly_salary(){
        cout << "My monthly salary is: " << salary << endl;
    }
};

class Manager: public Employee{
    protected:
    string department;

    public:
    Manager(string name, int salary, string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work(){
        cout << "I am leading the department: " << department << endl;
    }
};

int main(){
    Manager A1("Ujjwal", 150000, "Finance");
    A1.introduce();
    A1.Monthly_salary();
    A1.work();
}