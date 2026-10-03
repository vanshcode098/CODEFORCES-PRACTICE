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
     vector<int>p(n);
     for(int i=0;i<n;i++)
     {
        cin>>p[i];

     }
  
      for(int i=0;i<n-1;i++)
      {
        if(n==1)
        {
            cout<<"yes"<<endl;
        }
        if(i==p[i]-1)
        {
            continue;
        }
        else{
           swap(p[i],p[i-1]);
        }
      }
    int j=0;
      while(j<n-1)
      {
        if(p[j]<p[j+1])
        {
            cout<<"yes"<<endl;
            j++;
        }
        else{
             cout<<"no"<<endl;
             j++;
        }
      }
   
    }
    return 0;
}