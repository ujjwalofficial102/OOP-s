#include <iostream>
using namespace std;

class Customer{
    string name;
    int balance, account_number;

    public:
    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }
    //deposit
    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout << amount << " is credited successfully" << endl;
            cout << "Total Balance: " << balance << endl;
        }
        else{
            throw runtime_error("Amount should be greater than 0\n");
        }
    }
    //withdraw
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << amount << " is debited successfully" << endl;
            cout << "Total Balance: " << balance << endl;
        }
        else if(amount <= 0){
            throw runtime_error("Amount should be greater than 0\n");
        }
        else{
            throw runtime_error("Balance is insufficient\n");
        }
    }
};

int main(){
    Customer C1("Ujjwal", 5000, 311);
    try{
        C1.deposit(300);
        C1.withdraw(6000);
    }
    catch(const runtime_error &e){
        cout << "Exception Occured: " << e.what() << endl;
    }
    catch(...){ // default catch block
        cout << "Exception Occured!" << endl;
    }
}