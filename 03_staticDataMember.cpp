#include <iostream>
using namespace std;

class Customer{
    string name;
    int acc_num, balance;

public:
    static int totalCust;

    Customer(string name, int acc_num, int balance){
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        totalCust++;
    }
    void display(){
        cout << name << " " << acc_num << " " << balance << " " << totalCust << endl;
    }
};

//Initialization
int Customer::totalCust = 0;

int main(){
    Customer A1("Tony", 1, 1000);
    Customer A2("Thor", 2, 1500);
    Customer A3("Rocky", 3, 896);
    A1.display();
    A2.display();
    A3.display();

    cout << "total customers: " << Customer::totalCust << endl; // access from anywhere
}