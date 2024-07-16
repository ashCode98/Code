#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define endl '\n'

void solve(){
    ll n, m; cin >> n >> m;
    string s1, s2; cin >> s1 >> s2;
    
    reverse(s2.begin(), s2.end());

    s1 += s2;

    int ans = 0;
    for(int i = 0; i<s1.size()-1; i++){
        if(s1[i] == s1[i+1]) ans++;
    }

    if(ans <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	int testcase = 1;
    cin >> testcase;
	while(testcase--){
	   solve();
	}
}