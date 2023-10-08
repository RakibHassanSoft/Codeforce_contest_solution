#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    ll sa = 0, sb = 0;
    for (auto &i : a)
    {
        cin >> i;
        sa += i;
    }
    for (auto &i : b)
    {
        cin >> i;
        sb += i;
    }
    sort(all(a));
    sort(all(b));
    if (k % 2 == 1)
    {
        if (b[m - 1] >= a[0])
            cout << sa + b[m - 1] - a[0] << endl;
        else
            cout << sa << endl;
    }
    else
    {
        if (b[m - 1] >= a[0])
        {
            cout << sa - a[0] + b[m - 1] + min(a[0], b[0]) - max(a[n - 1], b[m - 1]) << endl;
        }
        else
            cout << sa - a[n - 1] + b[0] << endl;
    }
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
