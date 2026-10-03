#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, a;
        cin >> n >> a;

        int left = 0;
        int right = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x < a)
            {
                left++;
            }
            else if(x > a)
            {
                right++;
            }
        }

        if(left > right)
        {
            cout << a - 1 << endl;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }

    return 0;
}