#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(char ch='A'+n-1;ch>='A'+n-i-1;ch--)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}