#include <iostream>
using namespace std;

class Customer{
    string name;
    int acc_num, balance;
    static int totalCust, totalBalance;
    
public:

    Customer(string name, int acc_num, int balance){
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        totalCust++;
        totalBalance += balance;
    }
    // To access total customer even if it is private
    // static function
    static void getStaticData(){
        cout << "Total Customer: " << totalCust << endl;
        cout << "Total Balance: " << totalBalance << endl;
    }

    void display(){
        cout << name << " " << acc_num << " " << balance << endl;
    }
};

//Initialization
int Customer::totalCust = 0;
int Customer::totalBalance = 0;

int main(){
    Customer A1("Tony", 1, 1000);
    A1.display();
    Customer A2("Thor", 2, 1500);
    A2.display();
    Customer A3("Rocky", 3, 896);
    A3.display();
    Customer A4("sky", 4, 500);
    A4.display();
    Customer A5("Roc", 5, 600);
    A5.display();

    // cout << "total customers: " << Customer::totalCust << endl;    // access static data member directly from anywhere

    Customer::getStaticData();
}