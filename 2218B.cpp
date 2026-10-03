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
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
        sort(a.begin(),a.end());
        int x=a[n-1];
        int sum=0;
        int ans=0;
          for(int i=0;i<n-1;i++)
          {
             sum+=a[i];
             ans=-1*sum;
          }
   
         cout<< (ans+x) <<endl;
    }
    return 0;
}