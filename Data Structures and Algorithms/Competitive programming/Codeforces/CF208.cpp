#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

ll n, m;

void solve(){
	cin >> n >> m;
	ll count = -1;
	if(m % n == 0){
        ll operation = m/n;
	    count = 0;
		while(operation % 2 == 0){
			operation=operation/2;
			count++;
		}
		while(operation % 3 == 0){
			operation=operation/3;
			count++;
		}
		if(operation != 1){
			count = -1;
		}
	}
	cout << count;
	

}

int main(){
	ll t=1;
	// cin >> t;
	while(t--){solve();}
}