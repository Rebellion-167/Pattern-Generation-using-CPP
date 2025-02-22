#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}