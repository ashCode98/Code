#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end()); //sort all the atheles with strength
    
    int finalAnswer = INT_MAX;
    
    for(int i = 1; i<n; i++){
    	int diff = abs(arr[i] - arr[i-1]);
    	if(diff < finalAnswer){
    		finalAnswer = diff;
    	}
    }
    
    cout << finalAnswer << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}