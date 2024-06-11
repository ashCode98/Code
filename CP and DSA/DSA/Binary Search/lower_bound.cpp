#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 2;
    vector<int> v = {1, 2, 2, 3};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= x)
        {
            cout << v[i] << " " << i;
            break;
        }
    }
}