#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int minIncrementForUnique(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int diff = nums[i] - nums[0];
            if (diff < min)
                min = diff;
        }
        return min;
    }
};
// @lc code=end
