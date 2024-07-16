#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define space ' '

void solve(){
	ll n;
	cin >> n;
    cout << 2 << endl;
    for(ll i = n-1; i>=1; i--){
    	cout << i << space << min(n, i + 2) << endl;
    }
}

int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
	}
}