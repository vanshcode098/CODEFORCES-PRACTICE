
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

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool ok = true;

        for(int i = 0; i < n; i++)
        {
            int diff = b[i] - a[i];

            if(diff < 0 || diff > 1)
            {
                ok = false;
                break;
            }
        }

        if(ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

