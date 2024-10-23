#include <bits/stdc++.h>
using namespace std;

void print_ele(vector<int> v, vector<int> c)
{
    for (int i = 0; i < v.size(); i++)
    {
        int data = v[i];
        for (int k = 0; k < c.size(); k++)
        {
            if (data == c[k])
            {
                cout << k + 1 << " ";
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        c.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b[i] = x;
        c.push_back(x);
    }

    sort(c.begin(), c.end());

    print_ele(a, c);
    cout << endl;
    print_ele(b, c);
}