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
        sort(a.rbegin(),a.rend());
          for(int i=0;i<n-1;i++)
     {
        if(a[i]==a[i+1])
        {
            cout<< "-1\n";
            return;
        }
    
     }
    for (auto x : a)
    {
		cout << x << " ";
	cout << "\n";
    }
    }
    return 0;
}