

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n, k;
        cin >> n >> k;

        long long x = 1LL << (n - k + 1);
        long long y = 2LL * (k - 1);

        cout << x + y << endl;
    }
    return 0;
}