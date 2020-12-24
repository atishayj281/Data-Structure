#include <iostream>
using namespace std;

void toh(char BEG, char AUX, char END, int n)
{
    if (n >= 1)
    {
        toh(BEG, END, AUX, n - 1);
        cout << BEG << " to " << END << "\n";
        toh(AUX, BEG, END, n - 1);
    }
}

int main()
{
    char A, B, C;
    int x;
    A = 'A';
    B = 'B';
    C = 'C';
    toh(A, B, C, 3);
    return 0;
}