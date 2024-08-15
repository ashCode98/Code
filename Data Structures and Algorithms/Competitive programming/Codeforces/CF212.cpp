#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    ll n, target; cin >> n >> target;

    vector<ll> v(n+1);
    for(ll i = 1; i<=n; i++)cin >> v[i];

    ll cell = 1;
    while(cell < target){
        cell += v[cell];
    }

    if(cell == target)cout << "YES";
    else cout << "NO";
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
