#include <bits/stdc++.h>
using namespace std;

int last_occurs(vector<int> v, int target)
{
    int ans = -1;
    int low = 0, high = v.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if(v[mid] < target){
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int first_occurs(vector<int> v, int target)
{
    int ans = -1;
    int low = 0, high = v.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(v[mid] > target){
            high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v = {1};
    int target = 1;
    cout << first_occurs(v, target) << " " << last_occurs(v, target);
}