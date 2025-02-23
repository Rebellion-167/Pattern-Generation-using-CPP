#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int i,j;
    int num = 1;//counter variable

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
}