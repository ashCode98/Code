#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            m[x]++;
        }

        if (m.size() >= 3)
        {
            cout << "No" << endl;
        }
        else
        {
            if (abs(m.begin()->second - m.rbegin()->second) <= 1 == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}