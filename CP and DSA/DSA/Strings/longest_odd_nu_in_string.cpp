#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num = "35427";
    for (int i = num.size() - 1; i >= 0; i--)
    {
        if (num[i] % 2 == 1)
        {
            cout << num.substr(0, i + 1) << endl;
        }
    }
}