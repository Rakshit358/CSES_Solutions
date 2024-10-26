#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] %= 4;
        }
        long long xo = 0;
        for (int i = 0; i < n; i++)
        {
            xo = xo ^ v[i];
        }
        if (xo == 0)
        {
            cout << "second\n";
        }
        else
        {
            cout << "first\n";
        }
    }
}