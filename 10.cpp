#include<iostream>
using namespace std;


int binarytodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
      int y=n%10;
      cout<<y<<endl;
      ans+=x*y;
      cout<<ans<<endl;
      x*=2;
      cout<<x<<endl;
      n/=10;
      cout<<n<<endl;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binarytodecimal(n)<<endl;
    
}



