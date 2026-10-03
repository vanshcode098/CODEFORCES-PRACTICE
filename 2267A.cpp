#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,c;
        cin >> n>>c;

        string s;
        cin >> s;
int i=0;
int j=n-1;
int cnt=0;
       while(i<j)
       {
        if(s[i]==s[j])
        {
            cnt+=0;
        }
        else if(s[i]==c || s[j]==c)
        {
            cnt+=1;
        }
        else{
            cnt+=2;
        }
        i++;
        j--;
    }
    return cnt;
}
return 0;
}
 
 