// #include <iostream>
// using namespace std;
  
// int main()
// {
//     int a = 32, *ptr = &a;
//     char ch = 'A', &cho = ch;
//     cout<<ch<<endl;
  
//     cho =cho+a;
//     cout<<cho<<endl;
//     *ptr += ch;
//     cout<<*ptr<<endl;
//     cout << a << ", " << ch << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int* p;
    p = num;
    cout<<p<<endl;
    *p = 10;
    cout<<*p<<endl;
    p++;
    *p = 20;
    p = &num[2];
    cout<<p<<endl;
    *p = 30;
    p = num + 3;
    cout<<p<<endl;
    cout<<num<<endl;
    *p = 40;
    p = num;
    cout<<p<<endl;
    *(p + 4) = 50;
    for (int i = 0; i < 5; i++)
        cout << num[i] << ", ";
    return 0;
}