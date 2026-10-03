#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int x,y;
       cin>>x>>y;
       int  k= y-x;
       if(k %x==0 && k%y!=0)
       {
          cout<<"yes"<<endl;
       }
       else{
            cout<<"no"<<endl;
       }
        
    }
    return 0;
}