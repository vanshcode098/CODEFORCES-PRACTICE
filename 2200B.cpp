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

        int i = 0;
        int j = 1;

        bool ans = true;

        while(j < n)
        {
            if(a[i] > a[j])
            {
                ans = false;
            }

            i++;
            j++;
        }

        if(ans == true)
        {
            cout << n << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}