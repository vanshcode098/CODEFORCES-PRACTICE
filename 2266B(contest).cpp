#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,c;
        cin >> a>>b>>c;
        long long ans= llabs(a-b);
        if(c<=ans)
        {
            cout<<ans<<'\n';
        }
        else{
            cout<< (c-ans)<<'\n';
        }
   

}

    return 0;
}