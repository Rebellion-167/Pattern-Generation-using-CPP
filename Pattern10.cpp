#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i,j;
    int stars;//to store the number of starts to be printed

    for(i=1;i<=(2*n)-1;i++)
    {
        stars = (i>n)? (2*n) - i : i;
        for(j=1;j<=stars;j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}