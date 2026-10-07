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

        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            if(k == a[i])
            {
                cnt++;
            }
        }

        int missing = 0;

        
        for(int x = 0; x < k; x++)
        {
            bool found = false;

            for(int i = 0; i < n; i++)
            {
                if(a[i] == x)
                {
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                missing++;
            }
        }

        if(cnt > 0)
        {
            cout << max(cnt, missing) << endl;
        }
        else
        {
            cout << missing << endl;
        }
    }

    return 0;
}