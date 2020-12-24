#include <iostream>
using namespace std;
int arr3[30][30];
int main()
{
    int arr1[30][30], arr2[30][30];
    int i, j, k;
    int row, col;
    cout << " Enter the number of columns = ";
    cin >> col;
    cout << " Ente rthe number of rows = ";
    cin >> row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << " Element [" << i << "][" << j << "] : ";
            cin >> arr1[i][j];
        }
    }
    cout << " Now Enter the date for next matrix : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << " Element [" << i << "][" << j << "] : ";
            cin >> arr2[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (k = 0; k < col; k++)
        {
            for (j = 0; j < row; j++)
            {
                arr3[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }
    cout << " First Matrix : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << " " << arr1[i][j];
        }
        cout << endl;
    }
    cout << "\n Second Matrix : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << " " << arr2[i][j];
        }
        cout << endl;
    }
    cout << "\n Resultant Matrix : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << " " << arr3[i][j];
        }
        cout << endl;
    }
    return 0;
}