#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i,j;

    //upper half
    for(i=0;i<n;i++)
    {
        //space
        for(j=0;j<n-i-1;j++)
        {
            cout << " ";
        }

        //star
        for(j=0;j<(2*i)+1;j++)
        {
            cout << "*";
        }

        //space
        for(j=0;j<n-i-1;j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    //lower half
    for(i=0;i<n;i++)
    {
        //space
        for(j=0;j<i;j++)
        {
            cout << " ";
        }

        //star
        for(j=0;j<(2*n)-((2*i)+1);j++)
        {
            cout << "*";
        }

        //space
        for(j=0;j<i;j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}