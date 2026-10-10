
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x0, y0, r;
        cin >> x0 >> y0 >> r;

        int x1 = x0;
        int y1 = y0 + r;

        cout << x1 << " " << y1 << endl;
    }

    return 0;
}
