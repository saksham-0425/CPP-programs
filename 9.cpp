#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit = n%10;
        cout<<lastdigit<<endl;
        reverse=reverse*10+lastdigit;
        cout<<reverse<<endl;
        n=n/10;
        cout<<n<<endl;
    }
    cout<<reverse<<endl;
    return 0;
}