#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n
     cin >> n;
  vector<int> a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int cnt=0;
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;i<n;i++)
   {
       int x= a[i]%a[j];
        int y= a[j]%a[i];

        if(x==a[i] || y==a[i])
        {
            cnt++;
        }
        if(x==y)
        {
            cnt++;
        }
   }
   }
    cout<<cnt<<endl;   
    }
    return 0;
}