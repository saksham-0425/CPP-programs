#include<iostream>
using namespace std;

int main(){
    // int i;
     int marks[4]={43,23,45,43};
    // for (  i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    

    //pointers and arrays
    int *p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"the value of marks[0] is:"<<*p<<endl;
    // cout<<"the value of marks[1] is:"<<*(p+1)<<endl;
    // cout<<"the value of marks[2] is:"<<*(p+2)<<endl;
    // cout<<"the value of marks[3] is:"<<*(p+3)<<endl;
    return 0;
}