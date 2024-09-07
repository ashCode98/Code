#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
	int n; cin >> n;
	string s; cin >> s;
    int ans = n;
    for(int i = 0; i<n; i++){
    	if(s[i] == '1'){
    		ans = max(ans, 2*max(i+1, n-i));
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