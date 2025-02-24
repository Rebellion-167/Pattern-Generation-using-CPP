#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    
    // int stars;
    int spaces = (2*n)-2;
    for(int i=1;i<=(2*n)-1;i++)
    {
        int stars = (i>n)? (2*n) - i : i;
        //stars
        for(int j=1;j<=stars;j++)
        {
            cout << "*";
        }
        //spaces
        for(int j=1;j<=spaces;j++)
        {
            cout << " ";
        }
        //stars
        for(int j=1;j<=stars;j++)
        {
            cout << "*";
        }

        cout << endl;
        if(i < n) spaces -=2;
        else spaces +=2;
    }

    return 0;
}