#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout; //object
    fout.open("Ok.txt"); //create and then open
    fout << "Namaste India!"; //write inside the file
    fout.close(); //free the allocated resources
}