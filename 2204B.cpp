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
 int mx = *max_element(a.begin(), a.end());

int ans = 0;
int cur = 0;

for(int i = 0; i < n; i++)
{
    if(a[i] > cur)
    {
        ans++;
        cur = a[i];
    }

    if(a[i] == mx)
        break;
}

cout << ans << endl;

   
   
 

    
    }
    return 0;
}