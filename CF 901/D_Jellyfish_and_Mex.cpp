#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second

using ll = long long;
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> elems(n);
        vector<ll> f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> elems[i];
            if (elems[i] < n)
            {
                f[elems[i]]++;
            }
        }
        int mex = n;
        for (int i = 0; i < n; i++)
        {
            if (!f[i])
            {
                mex = i;
                break;
            }
        }
        if (mex == 0)
        {
            cout << 0 << endl;
            continue;
        }
        vector<ll> best(n + 1, 1e15);
        for (ll i = 1; i <= n; i++)
        {
            best[i] = i * (f[0] - 1);
        }
        ll ans = best[mex];
        for (int i = 1; i < n; i++)
        {
            if (mex == i)
            {
                break;
            }
            vector<ll> nbest(n + 1, 1e15);
            for (ll j = i + 1; j <= n; j++)
            {
                nbest[j] = min(best[j], (j * (f[i] - 1) + i) + best[i]);
            }
            best = nbest;
            ans = min(ans, best[mex]);
        }
        cout << ans << endl;
    }
}