#include <iostream>
using namespace std;

// Traversal of Array
void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << " : " << arr[i] << endl;
    }
}
// Binary Search
int Binary_Search(int arr[], int size, int element)
{
    int first = 0, last = size - 1;
    while (last >= 1)
    {
        if (arr[first] == element)
        {
            return first + 1;
        }
        else if (arr[last] == element)
        {
            return last + 1;
        }
        int mid = (first + (last + 1)) / 2;
        if (arr[mid] == element)
        {
            return mid + 1;
        }
        if (arr[mid] < element)
        {
            first = mid;
        }
        else if (arr[mid] > element)
        {
            last = mid;
        }
    }
    return -1;
}

// Searching
int serach_in_array(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

// Insertion of array
int *insert(int arr[], int size, int insert_element, int index)
{
    if (index <= size)
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = insert_element;
        return arr;
    }
    return arr;
}

// Delete an element
int *Deletion(int arr[], int size, int element)
{
    int index = serach_in_array(arr, size, element);
    if (index != -1)
    {
        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        return arr;
    }
    else
    {
        cout << "Element is not present";
        return 0;
    }
}

// Sorting of Array
int *Sort_Array(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

// Main Function
int main()
{
    int arr[30], size;
    cout << "Entet the size of array = ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th Element : ";
        cin >> arr[i];
    }
    Sort_Array(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    while (1)
    {
        int ch;
        cout << "\n1 : Delete\n2 : Insert\n3 : Display\n4: Sort\n5 : Search\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int element;
            cout << "Eter the element to Delete";
            cin >> element;
            Deletion(arr, size, element);
            size--;
            break;
        }
        case 2:
        {
            int element, index;
            cout << "Enter the element to insert = ";
            cin >> element;
            cout << "Enter the location";
            cin >> index;
            insert(arr, size, element, index - 1);
            size++;
            cout << "Done";
            break;
        }
        case 3:
        {
            traversal(arr, size);
            break;
        }
        case 4:
        {
            Sort_Array(arr, size);
            cout << "Done";
            break;
        }
        case 5:
        {
            int element;
            cout << "Enter the Element to Search = ";
            cin >> element;
            cout << element << " found at " << Binary_Search(arr, size, element);
            break;
        }
        default:
            cout << "Try Again";
            break;
        }
    }

    return 0;
}