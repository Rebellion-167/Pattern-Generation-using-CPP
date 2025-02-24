#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    //upper half
    int space = 0;
    for(int i=0;i<n;i++)
    {
        //stars
        for(int j=0;j<n-i;j++)
        {
            cout << "*";
        }
        //spaces
        for(int j=0;j<space;j++)
        {
            cout << " ";
        }
        //stars
        for(int j=0;j<n-i;j++)
        {
            cout << "*";
        }
        
        space+=2;
        cout << endl;
    }

    //lower half
    space -=2;
    for(int i=0;i<n;i++)
    {
        //stars
        for(int j=0;j<=i;j++)
        {
            cout << "*";
        }
        //spaces
        for(int j=0;j<space;j++)
        {
            cout << " ";
        }
        //stars
        for(int j=0;j<=i;j++)
        {
            cout << "*";
        }

        space -= 2;
        cout << endl;
    }

    return 0;
}