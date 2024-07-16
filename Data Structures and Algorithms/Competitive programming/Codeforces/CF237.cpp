#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define endl '\n'

void solve(){
    vector<ll> v(4);
    for(ll i = 0; i<4; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    ll b = (v[0]+v[1]-v[3]);

    ll a = v[0] - b;
    ll c = v[1] - b;

    cout << a << " " << b << " " << c; 
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