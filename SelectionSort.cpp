#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int n = size, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nElement : " << arr[i];
    }
}

int main()
{
    int arr[30];
    int size;
    cout << "Enter the size of Array = ";
    cin >> size;
    cout << "Enter the Elements\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i<<" : ";
        cin >> arr[i];
    }
    display(arr, size);
    cout<<"\n\t";
    SelectionSort(arr, size);
    display(arr, size);

    return 0;
}