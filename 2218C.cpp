
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int i=0;
        int j=n-2;
        int k= n-1;
           while(i<n && j>0 &&,k>0)
         {
            cout << i << " "
                 << j << " "
                 << k << " ";
                 i++;
                 j--;
                 k--;
        }

        cout << '\n';
    }
}