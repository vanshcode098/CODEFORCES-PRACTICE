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
            vector<int>a(n);
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
           int mx= *max_element(a.begin(),a.end());
            int mn= *min_element(a.begin(),a.end());

 if (mx == mn) cout << mx << '\n';
        else {
            cout << (((1<<(32-__builtin_clz(mx^mn)))-1)|mx) << '\n';
        }

    }

    return 0;
}
