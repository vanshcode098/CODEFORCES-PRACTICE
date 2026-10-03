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
       string s;
       cin>>s;
       int i=0;
       int j=n-1;
       while(i<n)
       {
        if(s[i]!=s[i+1])
        {
            continue;
            i++;
        }
        else{
            swap(s[i],s[j]);
            j--;
        }
       }
       bool ans=false;
       for(int i=0;i<n;i++)
       {
        if(s[i]!=s[j])
        {
            ans=true;
        }
       }
       if(ans)
       {
        cout<<"yes"<<endl;
       }
       else{
          cout<<"no"<<endl;
       }
    }
    return 0;
}