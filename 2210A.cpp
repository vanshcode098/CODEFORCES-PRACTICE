

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
        a.push_back(i);

     }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<n-1;i++)
        {
            if(a[i]%a[i+1] >= a[i+1])
            {
                continue;
            }
            else{
                swap(a[i],a[i+1])
            }
        }
        for(int i=0;i<n;i++)
        {
           cout<<a[i]<<endl;
        }
    }
    return 0;
}