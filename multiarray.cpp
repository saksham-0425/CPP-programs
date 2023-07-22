#include <iostream>
using namespace std;

int main()
{
    //     int x[3][4];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < 4; j++)
    //         {
    //             x[i][j] = i + j;
    //         }
    //     }

//2-D array:-

    int x[4][3];
    int i, j;
    cout << "the input for array:" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "x[" << i << "][" << j << "]=  ";
            cin >> x[i][j];
        }
    }
    cout << "the array elements are : " << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++){
            cout<<x[i][j];
        }
    }
    return 0;
}