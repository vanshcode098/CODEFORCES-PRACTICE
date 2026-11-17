
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                cnt0++;
            else
                cnt1++;
        }

        int mx = max(cnt0, cnt1);
        int mn = min(cnt0, cnt1);

        int take = min(k, mn);

        mx += take;
        mn -= take;

        long long ans = 1LL + 
                        (1LL * mx * (mx + 1)) / 2 +
                        (1LL * mn * (mn + 1)) / 2;

        cout << ans << endl;
    }

    return 0;
}
