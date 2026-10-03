

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
     vector<int>p(n);
       vector<int> a(n+1,0);
     for(int i=1;i<n-1;i++)
     {
        cin>>p[i];

     }
     int cnt=0;
     int ans=0;
       for(int i=1;i<n-1;i++)
     {
        if(p[i]<i)
        {
            cnt++;
        }
          ans=max(ans,i-cnt);

     }
         cout<<cnt<<endl;
   
    }
    return 0;
}