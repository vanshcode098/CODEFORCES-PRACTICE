
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int ans = 0;
        int available = 0;

        for (int i = 0; i <= n; i++)
        {
            available += freq[i];

            if (freq[i] == 0 || available < k)
            {
                break;
            }

            available -= k;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
