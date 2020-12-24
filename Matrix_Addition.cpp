#include<iostream>
using namespace std;

int main(){
    int arr1[30][30], arr2[30][30];
    int row, col;
    cout<<" Enter the no of rows : ";
    cin>>row;
    cout<<" Enter the number of columns : ";
    cin>>col;
    int i, j;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            cout<<" Element ["<<i<<"]["<<j<<"] : ";
            cin>>arr1[i][j];
        }
    }
    cout<<" Now Enter the date for next matrix : "<<endl;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            cout<<" Element ["<<i<<"]["<<j<<"] : ";
            cin>>arr2[i][j];
        }
    }

    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            arr1[i][j] += arr2[i][j];
        }
    }
    
    cout<<" After addition the new matrix is : "<<endl;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            cout<<" "<<arr1[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}