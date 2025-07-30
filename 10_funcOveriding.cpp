#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout << "Huhuhu" << endl;
    }

    //pure virtual class or abstract class
    virtual void eat() = 0;
};

class Dog: public Animal{
    public:
    void speak(){
        cout << "Bark" << endl;
    }
    void eat(){
        cout << "Biscuit" << endl;
    }
};

int main(){
    Animal* A;
    A = new Dog();
    A->speak();
    A->eat();
}