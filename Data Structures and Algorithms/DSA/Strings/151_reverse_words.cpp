#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "the sky is blue";
    reverse(s.begin(), s.end());
    // cout << s;

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.find(" "))
        {
            cnt++;
            // cout << s.find(" ");
        }
    }

    cout << cnt;
}