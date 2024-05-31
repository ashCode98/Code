#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    
    vector<int> v(n);
    for(int i = 0; i<n; i++)cin >> v[i];
    
    if(n==1) cout << v[0] << endl;
    else cout << x - n << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
}
