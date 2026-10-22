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

        if(n == 1 || n == 3)
        {
            cout << -1 << endl;
        }
        else if(n % 2 == 0)
        {
            string ans(n - 2, '3');
            ans += "66";
            cout << ans << endl;
        }
        else
        {
            string ans(n - 4, '3');
            ans += "6366";
            cout << ans << endl;
        }
    }

    return 0;
}
