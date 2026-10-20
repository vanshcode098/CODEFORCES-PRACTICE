
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

        vector<int> p(n, 0);

        int num = 1;

        for (int i = k - 1; i < n; i += k)
        {
            p[i] = num;
            num++;
        }

        for (int i = 0; i < n; i++)
        {
            if (p[i] == 0)
            {
                p[i] = num;
                num++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
