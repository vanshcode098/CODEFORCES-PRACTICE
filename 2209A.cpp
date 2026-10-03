#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,c,k;
     cin>>n>>c>>k;
     vector<int>a(n);
     for(int i=0;i<n;i++)
     {
        cin>>a[i];

     }
     sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(c<a[i])
        {
          break;
        }
        int x= min(k,c-a[i]);
        k-=a[i];
        c+=x;
        
        
    }
       cout<<c<<endl;
    }
    return 0;
}