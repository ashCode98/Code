#include <bits/stdc++.h>
using namespace std;

void insertEle(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
    }

    int val = v[v.size() - 1];
    v.pop_back();

    insertEle(v, temp);
}

void sortV(vector<int> v)
{
    if (v.size() == 1)
    {
        return;
    }

    int temp = v[v.size() - 1];
    v.pop_back();
    sortV(v);

    insertEle(v, temp);
}
int main()
{
    vector<int> v = {8, 1, 6, 5, 0, 2};
    sortV(v);

    for (auto i : v)
    {
        cout << i << ' ';
    }
}