#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a=45;
    // cout<<"the value of a was:"<<a;
    // a=45;
    // cout<<"the value of a is : "<<a;
    
    
    //constants in c++
    // const int a=3;
    // int a=45;
    // cout<<"the value of a was:"<<a;
    // return 0;

    int a=2,b=78,c=1234;
    cout<<"the value of a without setw is "<<a<<endl;
    cout<<"the value of b without setw is "<<b<<endl;
    cout<<"the value of c without setw is "<<c<<endl;

    cout<<"the value of a with setw is "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is "<<setw(4)<<c<<endl;

    //endl and setw are both manipulators

    
}