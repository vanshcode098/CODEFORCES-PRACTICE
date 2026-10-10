
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int zeros = 0;
        int maxKeep = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                zeros++;
            }
            else
            {
                maxKeep = max(maxKeep, zeros + 1);
            }
        }

        cout << s.size() - maxKeep << endl;
    }

    return 0;
}
