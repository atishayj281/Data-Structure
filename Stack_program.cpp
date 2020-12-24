#include <iostream>
using namespace std;

// Pushing Element in Stack
void push(int stack[], int maxstak, int *top, int val)
{
    if (*top == maxstak - 1)
    {
        cout << "\nStack Overflowed";
        return;
    }
    *top = *top + 1;
    stack[*top] = val;
    return;
}

int pop(int stack[], int maxstak, int *top)
{
    if (*top != -1)
    {
        cout << " Top is : " << *top;
        int element = stack[*top];
        *top = *top - 1;
        cout << "\n now Top is : " << *top;
        return element;
    }
}

void display(int stack[], int top)
{
    if (top != -1)
        for (int i = 0; i <= top; i++)
        {
            cout << "\tElement" << stack[i] << "\n";
        }
    else
        cout << " underflow";
    return;
}

int main()
{
    int stack[100];
    int maxsatk = 20;
    int top = -1;
    int choice, go = 1;
    while (go == 1)
    {
        cout << "1 : Push\n2 : Pop\n3 : Display\n4: Exit";
        cout << "\n\tEnter your choice";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int val;
            cout << "Enter the element";
            cin >> val;
            push(stack, maxsatk, &top, val);
            cout << "Stack is : \n";
            display(stack, top);
            break;
        }
        case 2:
        {
            if (top != -1)
            {
                int poped = pop(stack, maxsatk, &top);
                if (poped != -1)
                {
                    cout << "\nStack is : \n\t";
                    display(stack, top);
                }
                break;
            }
        }
        case 3:
        {
            cout << "Stack is : \n\t";
            display(stack, top);
            break;
        }
        case 4:
        {
            exit(1);
        }
        default:
        {
            cout << "Invalid iput";
        }
        }
        cout << "Press 1 to continue";
        cin >> go;
    }
    return 0;
}