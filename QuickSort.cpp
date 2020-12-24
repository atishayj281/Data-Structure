#include <iostream>
using namespace std;
// int partition(int A[], int low, int high)
// {
//     int pivot = A[low];
//     int i = low + 1;
//     int j = high;
//     int temp;
//     do
//     {
//         while (A[i] <= pivot)
//         {
//             i++;
//         }

//         while (A[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);
//     // Swap the A[j] and pivot and return the j index : (Location of the pivot)
//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;
//     return j;
// }

int partition(int arr[], int p, int r)
{
    int pivot = arr[r];
    int i = p-1, j;
    int temp;
    for(j = p; j<r-1;j++ )
    {
        if(arr[j]<=pivot)
        {
            i += 1;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    if(arr[i]>=pivot)
    {
        temp = arr[i+1];
        arr[i+1] = arr[r];
        arr[r] = temp;
    }
    return i+1;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void QuickSort(int arr[], int low, int high)
{
    int partitionIndex; //It will take the Exact index of the pivot
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        printArray(arr, high+1);
        QuickSort(arr, low, partitionIndex - 1);
        printArray(arr, high+1);
        QuickSort(arr, partitionIndex + 1, high);
        printArray(arr, high+1);
    }
}


int main()
{
    int n;
    cout<<" Enter the Size of the Array : ";
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<" Enter the Element : ";
        cin>> arr[i];
    }
    cout<<" \nBefore Sorting ";
    printArray(arr, n);
    QuickSort(arr, 0, n - 1);
    cout<<" \nAfter Sorting Sorting ";
    printArray(arr, n);
    return 0;
}
