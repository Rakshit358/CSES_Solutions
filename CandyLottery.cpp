#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long double ans = 0.0;

    for (int i = 1; i <= k; i++)
    {
        long double add = 1.00, sub = 1.00;
        add = pow((long double)i / (long double)k, n);
        sub = pow((long double)(i - 1) / (long double)k, n);
        ans += (long double)i * (add - sub);
    }
    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}
