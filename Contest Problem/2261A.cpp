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

        string s;
        cin >> s;

        int cnt = 0;
        int first = -1, last = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;

                if (first == -1)
                    first = i;

                last = i;
            }
        }

        if (cnt == 2)
            cout << 1 << '\n';
        else
            cout << last - first << '\n';
    }

    return 0;
}
