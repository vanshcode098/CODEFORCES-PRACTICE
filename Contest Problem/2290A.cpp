
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int l= a+1;
        int m= c-1;

        if(l==b && l==m)
        {
            cout<<"yes"<<endl;
        }
        else{
             cout<<"no"<<endl;
        }
      
    }

    return 0;
}