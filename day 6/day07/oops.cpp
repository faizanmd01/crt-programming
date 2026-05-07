#include<iostream>
using namespace std;

class student{
    //Acesss specifier
    public:
    //Data members
    string name;
    int roll_no;
    //Member functions
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
