#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector<int> v(n+1);
    int twoCnt = 0;
    for(int i = 1; i<=n; i++){
        cin >> v[i];
        if(v[i] == 2) twoCnt++;
    }

    int twoTillDate = 0;
    for(int i = 1; i<=n-1; i++){
        if(v[i] == 2) twoTillDate++;

        if(twoTillDate*2 == twoCnt){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
    
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