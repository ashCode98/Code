#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    int sum = 0;
    for(ll i = 0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }
    int ans = INT_MIN;
    for(int i = 0; i<n-1; i++){
        if(v[i] == v[i+1]){
            if(v[i] == 1){
                ans = max(ans, sum-4);
            }
            else{
                ans = max(ans, sum+4);
            }
        }
        else{
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;

}

int main(){
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);

	int t = 1;
    cin >> t;
	while(t--){
	   solve();
	}
}
