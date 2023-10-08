#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long p[100];
int main()
{
    int T;
    cin >> T;
    p[0] = 1;
    for (int i = 1;; i++)
    {
        p[i] = p[i - 1] * 2ll;
        if (p[i] > 1e9)
            break;
    }
    // cout << (long long)p[30];
    while (T--)
    {
        long long n, m;
        cin >> n >> m;
        int flag = 0;
        for (int i = 0; i <= 30; i++)
        {
            if (((int)(n * p[i])) % m == 0)
            {
                flag = 1;
                break;
            }
        }
        if (n % m == 0)
            flag = 1;
        if (flag == 0)
        {
            cout << "-1\n";
        }
        else
        {
            long long ans = 0;
            while (n != 0)
            {
                n %= m;
                ans += n;
                n *= 2ll;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}