
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> cnt(101, 0);

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        for(int i = 1; i <= n; i++)
        {
            for(int x = 100; x >= 1; x--)
            {
                if(cnt[x] >= i)
                {
                    cout << x << " ";
                }
            }
        }

        cout << "\n";
    }

    return 0;
}

