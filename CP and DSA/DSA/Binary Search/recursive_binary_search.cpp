#include <bits/stdc++.h>
using namespace std;

int recur(vector<int> &v, int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (v[mid] == target)
    {
        return mid;
    }
    else if (target > v[mid])
    {
        return recur(v, mid + 1, end, target);
    }
    else
    {
        return recur(v, start, mid - 1, target);
    }
}

int main()
{
    vector<int> v = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int ans = recur(v, 0, v.size() - 1, target);
    cout << "Our answer: " << ans << endl;
}