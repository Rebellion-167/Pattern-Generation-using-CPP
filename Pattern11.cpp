#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int i,j;
    int start = 1;

    for(i=1;i<=n;i++)
    {
        if(i%2!=0) start = 1;
        else start = 0;
        
        for(j=0;j<i;j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}