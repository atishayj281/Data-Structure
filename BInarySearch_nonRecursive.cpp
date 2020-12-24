#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int element)
{
    int up, low, mid;
    while (true)
    {
        low = 0;
        up = size - 1;
        if (element == arr[low])
        {
            return low;
        }
        else if (element == arr[up])
        {
            return up;
        }
        else
        {
            mid = (size - 1) / 2;
            size /= 2;
            if (arr[mid] > element)
            {
                up = mid;
            }
            else if (arr[mid] == element)
            {
                return mid;
            }
            else
            {
                low = mid;
            }
        }
    }
}

int main()
{
    int arr[100];
    int element;
    int size;
    cout << " Enter the Size of Array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << " Element " << i;
        cin >> arr[i];
    }
    cout << " Enter the elemtne for Search : ";
    cin >> element;
    int search = BinarySearch(arr, size, element);
    cout << element << " Found at " << search + 1;
    return 0;
}