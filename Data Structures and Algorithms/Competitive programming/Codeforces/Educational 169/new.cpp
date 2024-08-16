class Solution
{
public:
    int beauty(string s)
    {
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }

        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;

        for (int i = 0; i < 26; i++)
        {
            maxFreq = max(freq[i], maxFreq);
            if (freq[i] < minFreq && freq[i] != 0)
            {
                minFreq = freq[i];
            }
        }

        return abs(maxFreq - minFreq);
    }

    int beautySum(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int len = 1; len <= s.size() - i; len++)
            {
                string temp = s.substr(i, len);
                if (temp.size() >= 3)
                {
                    ans += beauty(temp);
                }
            }
        }
        return ans;
    }
};