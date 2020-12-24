#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    int j;
    int temp;
    for (j = size - 1 ; j >= 0; j--)
    {
        for (int i = 0; i <= j; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main()
{
    int arr[5] = {1,3,4,2,6};
    BubbleSort(arr, 5);
    for(int i = 0; i<5; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}