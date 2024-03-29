#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;

    for (int i = 1; i <= n; i++)
    {

        int flag = 0;

        for (int j = 0; j < n; j++)
        {
            // cout << arr[j] << " " << i << " ";
            // cout << endl;
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << i << " ";
            return 0;
        }
    }
}