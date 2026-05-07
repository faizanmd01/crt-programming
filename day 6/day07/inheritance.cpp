#include<iostream>
using namespace std;
class Player{
    public:
    string name;
    int runs;

    void setName(string n){
        name=n;
    }
    void setRuns(int r){
        runs=r;
    }
    class Cricketer:public Player{
        public:
        string country;
        Cricketer(string s){
            country=s;
        }
    };
int main(){
    Cricketer c1("India");
    c1.setName("Virat Kohli");
    c1.setRuns(12000);
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Runs: "<<c1.runs<<endl;
    cout<<"Country: "<<c1.country<<endl;
    return 0;
}