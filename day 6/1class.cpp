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
int main(){
    student s1;
    s1.name="John";
    s1.roll_no=101;
    s1.show();
    return 0;
}