#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n > 2)
    {
        cout << "NO" << endl;
        return;
    }
    else if (n == 2)
    {
        int a, b;
        cin >> a >> b;
        if (abs(a - b) > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
