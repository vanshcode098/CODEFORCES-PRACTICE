#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (p[i] > p[i + 1])
            {
                swap(p[i], p[n - 1]);
                break;
            }
        }

        int i = 0;
        bool ans = true;

        while (i < n - 1)
        {
            if (p[i] >= p[i + 1])
            {
                ans = false;
                break;
            }
            i++;
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}