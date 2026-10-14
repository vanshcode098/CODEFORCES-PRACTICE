
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

        int cnt = 0;
        bool possible = true;

  
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                cnt++;

                if(cnt >= k)
                {
                    possible = false;
                    break;
                }
            }
            else
            {
                cnt = 0;
            }
        }

        if(!possible)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<int> p(n);

        int small = 1;
        int big = 1;

   
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                big++;
        }

      
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                p[i] = small++;
            }
            else
            {
                p[i] = big++;
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
