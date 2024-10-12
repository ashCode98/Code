#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s1.find(s2) != string::npos)
        {
            cout << cnt << endl;
            return;
        }
        s1 += s1;
        cnt++;
    }
    cout << "-1" << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}