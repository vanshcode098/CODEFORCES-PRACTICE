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

        unordered_map<char, int> mp;

        for (char c : s)
        {
            mp[c]++;
        }

        char mostFrequent = s[0];

        for (auto p : mp)
        {
            if (p.second > mp[mostFrequent])
            {
                mostFrequent = p.first;
            }
        }

        char leastFrequent = mostFrequent;
        int minFreq = n + 1;

        for (auto p : mp)
        {
            if (p.first != mostFrequent && p.second < minFreq)
            {
                minFreq = p.second;
                leastFrequent = p.first;
            }
        }

        if (leastFrequent == mostFrequent)
        {
            cout << s << '\n';
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == leastFrequent)
            {
                s[i] = mostFrequent;
                break;
            }
        }

        cout << s << '\n';
    }

    return 0;
}