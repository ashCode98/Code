#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
	ll n; cin >> n;
	string s; cin >> s;
	ll same = 1;
	for(ll i = 0; i<n; i++){
		if(s[i] == s[i+1]){
			same++;
		}
	}
	if(same == n){
		cout << "NO";
	}
	else{
		cout << "YES" << endl;
		string ans = "";
        for(ll i = 0; i<n; i++){
            if(s[i] != s[i+1]){
            	cout << s[i] << s[i+1];
            	break;
            }
        }
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