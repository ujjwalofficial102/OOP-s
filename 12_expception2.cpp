#include <iostream>
using namespace std;

int main(){

    try{
        int *arr = new int[1000000000000];
        cout << "Memory Allocation Successful\n";
        delete[] arr;
    }
    catch(const exception &e){
        cout << "Exception Occured: " << e.what() << endl;
    }

    return 0;
}