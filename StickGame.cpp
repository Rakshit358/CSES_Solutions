#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(k);
    for (int i = 0; i < k; i++)
        cin >> p[i];
    vector<bool> pos(n, false);
    for (int i = 0; i < k; i++)
    {
        pos[p[i]] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (pos[i] == true)
            continue;
        else
        {
            bool f = false;
            for (int j = 0; j < k; j++)
            {
                if (p[j] <= i && pos[i - p[j]] == false)
                {
                    f = true;
                    break;
                }
            }
            if (f == true)
            {
                pos[i] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (pos[i])
        {
            cout << "W";
        }
        else
        {
            cout << "L";
        }
    }
    cout << endl;
}