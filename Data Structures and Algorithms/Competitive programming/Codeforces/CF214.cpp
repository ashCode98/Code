#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    reverse(v.begin(), v.end());
    for(int i = 0; i<n; i++){
        if(v[i] <= v[i+1]){
            v[i+1] = v[i+1]-(v[i+1]-v[i])-1;
            if(v[i+1] < 0){
                v[i+1] += 1;
            }
        }
    }
    int totalSum = 0;
    for(int i = 0; i<n; i++) totalSum += v[i];
    cout << totalSum;
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
