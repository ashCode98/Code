#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            // mid++;
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}