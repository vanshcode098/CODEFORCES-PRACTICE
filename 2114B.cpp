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

        string s;
        cin >> s;

        int zero = 0;

        for(char c : s)
        {
            if(c == '0')
            {
                zero++;
            }
        }

        int one = n - zero;

        int bad = n / 2 - k;

        if(zero >= bad && one >= bad &&
           (zero - bad) % 2 == 0)
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