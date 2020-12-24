#include<iostream>
using namespace std;

void insertSort(int arr[], int size)
{
    int j, i, key;
    for(j = 1; j<size; j++)
    {
        key = arr[j];
        for(i = j-1; i>=0 && arr[i]>key; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[i + 1] = key;
    }
}

void display(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void takeInput(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter the next Element : ";
        cin>>arr[i];
    }
}

int main(){
    int arr[1000];
    int size;
    cout<<"Enter the Size of Array : ";
    cin>>size;
    takeInput(arr, size);
    insertSort(arr, size);
    display(arr, size);
    return 0;
}