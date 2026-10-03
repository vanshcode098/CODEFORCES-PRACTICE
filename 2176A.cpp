#include<bits/stdc++.h>
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

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;
        int maxi = a[0];

        int i = 1;

        while(i < n)
        {
            if(maxi > a[i])
            {
                cnt++;
            }

            maxi = max(maxi, a[i]);

            i++;
        }

        cout << cnt << endl;
    }

    return 0;
}