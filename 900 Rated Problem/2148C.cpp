#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }

        int ans = 0;
        int pos = 0;
        int prevTime = 0;

        for(int i = 0; i < n; i++)
        {
            int time = a[i] - prevTime;

            if(pos == b[i])
            {
                // Same side: number of runs must be even
                if(time % 2 == 0)
                    ans += time;
                else
                    ans += time - 1;
            }
            else
            {
                // Different side: number of runs must be odd
                if(time % 2 == 1)
                    ans += time;
                else
                    ans += time - 1;
            }

            pos = b[i];
            prevTime = a[i];
        }

        // After the last requirement, run every remaining minute
        ans += m - prevTime;

        cout << ans << endl;
    }

    return 0;
}