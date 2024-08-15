#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){

    int n, k; cin >> n >> k;
    vector<pair<int, int >> mp(n);
    for(int i = 0; i<n; i++){
        cin >> mp[i].first;
        mp[i].second = i;
    }
    sort(mp.begin(), mp.end());
    vector<int> ans;

    for(int i = 0; i<n; i++){
        if(k < mp[i].first) break;
        k = k - mp[i].first;
        ans.push_back(mp[i].second+1);
    }

    cout << ans.size() << endl;
    for(int i : ans){
       cout << i << " ";
    }
}

int main(){
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);

	int t = 1;
    // cin >> t;
	while(t--){
	   solve();
	}
}