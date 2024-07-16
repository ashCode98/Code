#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = arr.size();

    if (n == 1)
    {
        cout << arr[0] << endl;
    }

    if (arr[0] != arr[1])
    {
        cout << arr[0] << endl;
    }

    if (arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << endl;
    }

    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        {
            cout << arr[mid] << endl;
        }

        if(mid % 2 == 1 && arr[mid] == arr[mid-1]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}