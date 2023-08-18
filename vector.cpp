#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
   for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<" ";

   }

   cout<<endl;
   
}

int main(){
    int size=5;
    vector<int> vec1;   //creation of vector
    vector<char> vec2;
    vector<char> vec3(vec2);
    vector<int> vec4(6,3);      //vecotr of size 6 of 3
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"enter an element to add to this vector";
    //     int element;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    display(vec1);

    //vec1.pop_back();

    vector<int> :: iterator iter=vec1.begin();
    vec1.insert(iter+1,3, 45);

    display(vec1);

    
    return 0;
}