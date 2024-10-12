#include <bits/stdc++.h>
using namespace std;

bool is_all_equal(vector<int> v)
{
    return equal(v.begin() + 1, v.end(), v.begin());
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 2)
    {
        cout << "Yes" << endl;
    }
    else if (n == 3)
    {
        if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
        {
            cout << "Yes" << endl;
        }
    }
    else if (is_all_equal(a) == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}