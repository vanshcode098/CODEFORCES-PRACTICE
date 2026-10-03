#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
       int i=0;
       int j=n-1
       while(i<j)
       {
        if(p[i]<p[j])
        {
            swap(p[i],p[j]);
            i++;
            j--;
        }
        else{
            i++;
            j--;
        }
        
       }
       for(int x:p )
       {
            cout<<x<<"";
       }
       cout<<'\n';
    }

    return 0;
}