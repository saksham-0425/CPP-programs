#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,s=0;
    cin>>x>>y;
    int *arr[x];
    while(x--){
        int num,i;
        cin>>num;
        arr[s]=new int(num);
        for(i=0;i<num;i++){
            cin>>arr[s][i];
        }
        s++;
    }
    while(y--){
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
    
}