#include<bits/stdc++.h>
using namespace std;

void solve(){
	int k, n;
	cin >> k >> n;
	
	vector<int> v(n);

	v[0] = 1;

	for(int i = 1; i<k; i++){
		v[i] = min(v[i-1]+i, n-(k-1-i));
	}

	for(int i = 0; i<k; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
}