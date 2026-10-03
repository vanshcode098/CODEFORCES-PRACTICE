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
       int x,y=0;
      int  cnt0,cnt1=0;
      for(int i=0;i<n;i++)
      {
        if(s[i]='0')
        {
            cnt0++;
        }
        else{
            cnt1++;
        }
      }
       for(int i=0;i<n;i++) 
       {
            if(s[i]='0' && s[i-1]==1  && s[i+]==1)
            {
                s[i]=1;
                cnt
            }
            else if(s[i]){
                
            }
       } 
      
    }
    return 0;
}