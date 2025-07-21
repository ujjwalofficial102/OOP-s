#include <iostream>
using namespace std;

class Customer{
    string name;
    int *data;

    public:

    //Constructor
    Customer(){
        name = "4";
        cout << "Constructor is " << name << endl;
    }
    Customer(string a){
        name = a;
        cout << "Constructor is " << name << endl;
    }
    Customer(string a, int n){
        name = a;
        data = new int;
        *data = n;
        cout << "Constructor is called\n";
    }

    // Destructor
    ~Customer(){
        delete data; // releases the dynamically allocated data
        cout << "Destructor is " << name << endl;
    }

    void display(){
        cout << name << " " << *data << " " << endl;
    }

};

int main(){
    // Customer A1("Ujwal", 5000);
    // A1.display();
    // Customer A2("tony", 200);
    // A2.display();
    // Customer A3("Stank", 8000);
    // A3.display();

    Customer A5("1"), A6("2"), A7("3");
    Customer *A4 = new Customer;
    delete A4;
}