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

        string r;
        cin>>r;
       int cnt1=0;
       int cnt2=0;
         for(int i=0;i<n;i++)
         {
            if(r[i]='s')
            {
                cnt1++;
            }
            else{
                    cnt2++;
            }
         }
          if(cnt1==0)
          {
            cout<<(n+2)/2<<endl;
            continue;
          }
       int ans=0;
       int i=0;
       while(i<n)
       {
        if(r[i]=='s')
            {
                i++;
                continue;
            }
       
        
       int j=i;
       while(j<n && r[j]='u')
       {
        j++;
       }
       int len= j-i;
       ans+=(len+1)/2;
       i=j;
    }
    cout<<ans<<endl;
}

    return 0;
}