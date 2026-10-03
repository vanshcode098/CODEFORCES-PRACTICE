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
           vector<int>b(n);
           unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=0;
        for(int i=0;i<n;i++)
        {
            x= abs(a[i]-2);
            b.push_back(x);
        }
       
        for(int i=0;i<b.size();i++)
        {
            mp[i]++
        {
          int y=0;
          for(auto it:mp)
          {
            y=max(y,it.second);
          }

        cout<<y<<endl;
        
    }
    return 0;
}