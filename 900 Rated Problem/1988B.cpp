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

        string s;
        cin >> s;

        int ones = 0;
        int zeroGroups = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                ones++;
            }
            else if(i == 0 || s[i - 1] == '1')
            {
                zeroGroups++;
            }
        }

        if(ones > zeroGroups)
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