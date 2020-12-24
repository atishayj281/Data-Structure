#include <iostream>
using namespace std;

// Return Top of the stack
char stackTop(char stack[], int top)
{
    return stack[top];
}

// Return 1 if the stack is Empty
int isEmpty(int top)
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

// push the operator in the stack
void push(char stack[], int maxstak, int *top, char val)
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

// Pop the operator from the stack
int pop(char stack[], int maxstak, int *top)
{
    if ((*top) == -1)
    {
        cout << "\nUnderflow";
        return -1; // Assuming that -1 will never be in my stack;
    }
    int element = stack[*top];
    *top = *top - 1;
    return element;
}

// Return the precedence Accordingly
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
        return 2;
    else
    {
        return 0;
    }
}

// Reverse the string
char *reverse_string(char str[])
{
    int i = 0, j = 0;
    char temp;
    while (str[i] != '\0')
    {
        i++;
    }
    i--;
    while (i > j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i--;
        j++;
    }
    return str;
}

// Returns 1 if input is operator
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    return 0;
}

/* First reverse the infix then convert it into postfix 
 "but when push the operator into stack it's precedence should be greater then or equal to stack[top]"
 then reverse the postfix and return it */
char *InfixToPrefix(char *infix, char *prefix)
{
    char stack[100];
    int top = -1;
    int maxstack = 100;
    int i = 0; //This is counter for infix
    int j = 0; //This is the counter for prefix
    reverse_string(infix);
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            prefix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) >= precedence(stackTop(stack, top)))
            {
                push(stack, maxstack, &top, infix[i]);
                i++;
            }
            else
            {
                prefix[j] = pop(stack, maxstack, &top);
                j++;
            }
        }
    }
    while (!isEmpty(top))
    {
        prefix[j] = pop(stack, maxstack, &top);
        j++;
    }
    prefix[j] = '\0';
    reverse_string(prefix);
    return prefix;
}

int main()
{
    char infix[100];
    char prefix[100];
    cout<<"\n\tEnter the Expression : ";
    cin>>infix;
    cout << "\n\tThe Prefix Expression : " << InfixToPrefix(infix, prefix);

    return 0;
}