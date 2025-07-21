#include <iostream>
using namespace std;

class Customer{
    string name;
    int account_number = 0, balance = 0;

    public:
    // Default Constructor
    Customer(){
        cout << "Contructor is Called" << endl;
        name = "Ujjwal";
        account_number = 311;
        balance = 1000;
    }
    // Parameterised Constructor
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // Inline Constructor
    inline Customer(string a, int bal) : name(a), balance(bal){}

    // Copy Constructor (not needed as default is already present)
    Customer(Customer &B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    Customer(string a){
        name = a;
    }

    void display(){
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main(){
    Customer A1;
    A1.display();

    Customer A2("Stank", 456, 9999);
    A2.display();
    
    Customer A3("Loki", 500);
    A3.display();

    Customer A4("Thor");
    A4.display();
    
    Customer A5(A2);
    A5.display();

    Customer A6 = A1;
    A6.display();
}