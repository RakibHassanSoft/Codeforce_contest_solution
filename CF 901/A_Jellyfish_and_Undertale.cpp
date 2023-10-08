#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int ans = b;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] >= a)
            {
                ans += a - 1;
            }
            else
            {
                ans += arr[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
