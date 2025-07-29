#include <iostream>
using namespace std;

class Complex{
    int real, img;

    public:
    Complex(){}
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    void display(){
        cout << real << " + i" << img << endl;
    }

    // operator overloading
    Complex operator +(Complex &C){
        Complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }

    Complex operator -(Complex &C){
        Complex ans;
        ans.real = real - C.real;
        ans.img = img - C.img;
        return ans;
    }
};

int main(){
    Complex C1(3,4);
    C1.display();
    Complex C2(16,7);
    C2.display();

    Complex C3 = C1 + C2; // its like C1.func(C2);
    C3.display();
    Complex C4 = C2 - C1;
    C4.display();
}