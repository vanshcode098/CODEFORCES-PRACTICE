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

        vector<int> p(n);

        for(int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        bool possible = true;

        for(int i = 0; i < n; i++)
        {
            if(abs(p[i] - (i + 1)) > 1)
            {
                possible = false;
                break;
            }
        }

        if(possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
