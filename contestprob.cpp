#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,k;
     cin>>n>>k;
     vector<int>a(k);
     vector<int>b(n);
     vector<int>c(n);
     for(int i=1;i<k;i++)
     {
        cin>>a[i];
     }
        for(int j=1;j<n;j++)
     {
        cin>>b[j];
     }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
      int i=1;
      int j=n-1;
      int ans=0;
      while(a[i]<=b[j])
      {
        if(a[i]<=b[j])
        {
            ans++;
            c.push_back(i);
            i++;
            j--;
        }
        else if(a[i]>b[j])
        {
             i++;
        }
      }
        cout<<ans<<endl;
        for(int i =1;i<n;i++)
        {
      cout<< c[i]<<endl;
        } 
    }
    return 0;
}