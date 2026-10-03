#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        int  tcst=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
          int x=a[n-1]
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>1)
            {
                tcst+= a[i];
            }
           if(a.back()==1)
           {
            ans++;
           }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}