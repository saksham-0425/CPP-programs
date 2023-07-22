// #include<iostream>
// using namespace std;

// int main(){
//     //what is a pointer?--a type of data which holds the address of other data types

//     int a=3;
//     int *b=&a;
//     cout<<"the address of a is:"<<&a<<endl;
//     cout<<"the address of a is:"<<b<<endl;
//     //&-address of operator
//     cout<<"the value at address b is:"<<*b<<endl;
//     cout<<"the value at address b is:"<<a<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;
void update(int *a,int *b){
    cout<<*a<<endl;
    int temp=*a;
    cout<<temp<<endl;
    *a=*a+*b;
    cout<<*a<<endl;
    *b = temp - *b;
    cout<<*b<<endl;
    if (*b < 0)
    {
        *b = -(*b);
    }


}
int main(){
    int a=3;
    int *pa=&a;
    int b=5;
    int *pb=&b;
    cout<<"pa , pb :"<<pa<<"\t" <<pb<<endl;
    cout<<"*pa ,*pb :"<<*pa<<"\t" <<*pb<<endl;
    update(pa,pb);
    cout << a << "\n" << b;
    return 0;
}