//functions

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
    //a and b are formal parameters
}
int main(){
    int num1,num2;
    cout<<"enter fist number"<<endl;
    cin>>num1;
    cout<<"enter 2nd number"<<endl;
    cin>>num2;
    
    //num1 and num2 are actual parameters
    cout<<"the sum is :"<<sum(num1, num2);
    return 0;
}