#include <iostream>
#include<cstring>
using namespace std;

// int print_diognal(int arr[][], int rows)
// {
//     int i, j;
//     for (i = 0; i < rows; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
// }

int main()
{
    int arr[30][30], i, j, rows;
    cout << "Enter the No. of rows = ";
    cin >> rows;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows; j++)
        {
            cout << "Enter the [" << i << "]["<<j<<"] - th element = ";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }    
    return 0;
}