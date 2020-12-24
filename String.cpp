#include <iostream>
using namespace std;

// Reverse a string
char *rev(char str[])
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

// Finding the length of string
int string_length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// Copy whole string
char *copy_whole_string(char str1[], char str2[]) // where str1 is the string in which we want to copy
{
    int i = 0, j = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    return str1;
}

// Copying init to final number of character of string
char *copy_number_char(char str1[], char str2[], int init, int final = -1)
{
    if (final == -1)
    {
        final = string_length(str1);
    }
    int len_str1 = string_length(str1);
    // int len_str2 = string_length(str2);
    int j = 0;
    for (int i = init - 1; i < final; i++)
    {
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';
    return str2;
}

// Concatinate Two Strings
char* concatinate(char str1[], char str2[])
{
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
       // i++;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    return str1;
}

// Main Function
int main()
{
    char str1[100];
    int choice;
    while (true)
    {
        char str2[100] = "";
        cout << "Enter the String : ";
        cin >> str1;
        cout << "1: Reverse\n2: Length\n3:Copy whole string\n4:Copy n to r char of string\n5:Join Two Strings\n6: Exit";
        cout << "\n\tEnter your choice = ";
        cin >> choice;
        if (choice == 1)
        {
            cout << rev(str1);
        }
        else if (choice == 2)
        {
            cout << copy_whole_string(str1, str2);
        }
        else if (choice == 3)
        {
            cout << "Done "<<endl;
            cout << "New String is : " << copy_whole_string(str1, str2)<<endl;
        }
        else if (choice == 4)
        {
            int init;
            char ch;
            cout << "Enter the Initial Location of Character = ";
            cin >> init;
            cout << "Do you Know the final location of character y/n= ";
            cin >> ch;
            if (ch == 'n')
            {
                cout << "Done\n";
                cout << "New String is : " << copy_number_char(str1, str2, init);
            }
            else if (ch == 'y')
            {
                int final;
                cout << "Enter the Final Location";
                cin >> final;
                cout << "Done! String copyied"<<endl;
                cout << "New String is : " << copy_number_char(str1, str2, init, final);
            }
        }
        else if (choice == 5)
        {
            cout << "Enter the another string : ";
            cin >> str2;
            cout << "\nNew String is : " << concatinate(str1, str2)<<endl;
            cout << "Done";
        }
        else if (choice == 6)
        {
            exit(1);
        }
        else
        {
            cout << "Try Again!!!";
        }
    }
}