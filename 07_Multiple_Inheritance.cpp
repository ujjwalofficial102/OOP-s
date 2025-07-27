// Multiple Inheritance refers to multiple parent class
#include <iostream>
using namespace std;

class Engineer{
    protected:
    string specialization;

    void work(){
        cout << "I have specialization in: " << specialization << endl;
    }

};

class Youtuber{
    protected:
    int subscribers;

    void subs_count(){
        cout << "I have  " << subscribers << "  subscribers" << endl;
    }
};

class Teacher: public Engineer, public Youtuber{
    protected:
    string name;

    public:
    Teacher(string specialization, int subscribers, string name){
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->name = name;
    }

    void display(){
        cout << "My name is: " << name << endl;
        work();
        subs_count();
    }
};

int main(){
    Teacher A1("Artificial Intelligence", 250000, "Ujjwal");
    A1.display();
}