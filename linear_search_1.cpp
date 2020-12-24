#include <iostream>
using namespace std;
int main()
{
    int size, arr[30], element, i;
    cout << "Enter the size of array = ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "-th element";
        cin >> arr[i];
    }

    cout << "Enter the element to search = ";
    cin >> element;
    int flag[size], j = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            flag[j] = i;
            j += 1;
        }
    }
    cout << "The first position of " << element << " is " << flag[0] + 1 << " and last position of " << element << " is " << flag[j - 1] + 1;

    return 0;
}