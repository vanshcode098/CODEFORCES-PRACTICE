
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

        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> freq(n + 1, 0);

        for(int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        bool flag = false;

        for(int i = 1; i <= n; i++)
        {
            if(freq[i] % 2 == 1)
            {
                flag = true;
                break;
            }
        }

        if(flag)
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
