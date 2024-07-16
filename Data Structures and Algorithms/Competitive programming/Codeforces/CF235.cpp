#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define endl '\n'

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    for(ll i = 0; i<n; i++){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    ll x = v[0], y = v[1];

    cout << (m/(k+1))*((x*k)+y)*1LL + (m%(k+1))*x; 
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	int testcase = 1;
    // cin >> testcase;
	while(testcase--){
	   solve();
	}
}