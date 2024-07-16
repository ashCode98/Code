#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define endl '\n'

void solve(){
	ll n; cin >> n;
	ll temp = n;
	string ans = "";
	while(temp > 0){
		if(temp % 7 != 0){
			temp = temp - 4;
			ans += '4';
		}
		else{
			temp = temp - 7;
			ans += '7';
		}
	}
	// cout << temp;

	if(temp != 0){
		cout << -1;
	}
	else{
		cout << ans;
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