#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i,j;

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