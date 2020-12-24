#include <iostream>
#include <string.h>
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

char IsOpenParcthesis(char para)
{
    if (para == '(' || para == '{' || para == '[')
        return 1;
    return 0;
}

char IsCloseParanthesis(char para)
{
    if (para == ')' || para == '}' || para == ']')
        return 1;
    return 0;
}

// Matching Paranthesis
int MatchingParanthesis(char exp[])
{
    int Maxstack = 100;
    char stack[Maxstack];
    int PtrTop = -1;
    int top = 0;
    while (exp[top] != '\0')
    {
        if (IsOpenParcthesis(exp[top]))
            push(stack, Maxstack, &PtrTop, exp[top]);
        else if (IsCloseParanthesis(exp[top]))
        {
            if (stack[PtrTop] == '(' && exp[top] == ')')
            {
                pop(stack, Maxstack, &PtrTop);
            }
            else if (stack[PtrTop] == '{' && exp[top] == '}')
            {
                pop(stack, Maxstack, &PtrTop);
            }
            else if (stack[PtrTop] == '[' && exp[top] == ']')
            {
                pop(stack, Maxstack, &PtrTop);
            }
            else
                return -1;
        }
        top = top + 1;
    }
    if (!isEmpty(PtrTop))
    {
        return -1;
    }
    return 1;
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

// Return 1 if input is an operator
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    return 0;
}

// Convert Infix to Postfix
char *InfixToPostfix(char infix[], char postfix[])
{
    if (MatchingParanthesis(infix) != -1)
    {

        char stack[100];
        int top = -1;
        int maxstak = 10000;
        int i = 0;
        int j = 0;
        while (infix[i] != '\0')
        {
            if (IsOpenParcthesis(infix[i]))
            {
                push(stack, maxstak, &top, infix[i]);
                i++;
            }
            else if (IsCloseParanthesis(infix[i]))
            {
                while (!IsOpenParcthesis(stack[top]))
                {
                    char ele = pop(stack, maxstak, &top);
                    postfix[j] = ele;
                    j++;
                }
                pop(stack, maxstak, &top);
                i++;
            }
            else if (!isOperator(infix[i]))
            {
                postfix[j] = infix[i];
                i++;
                j++;
            }
            else
            {
                if (precedence(infix[i]) > precedence(stackTop(stack, top)))
                {
                    push(stack, maxstak, &top, infix[i]);
                    i++;
                }
                else
                {
                    postfix[j] = pop(stack, maxstak, &top);
                    j++;
                }
            }
        }
        while (!isEmpty(top)) // Pop the operator from the stack and insert in the postfix string till the stack is not empty
        {
            postfix[j] = pop(stack, maxstak, &top);
            j++;
        }
        postfix[j] = '\0';
        return postfix;
    }
    else
    {
        cout << "Expression's Paranthesis does not Matched! Try Again";
    }
    return postfix;
}

int main()
{

    char infix[100];
    char postfix[100] = "";
    cout << "\n\tEnter the Expression : ";
    cin >> infix;
    cout << "\n\tPostfix Expression : " << InfixToPostfix(infix, postfix);

    return 0;
}