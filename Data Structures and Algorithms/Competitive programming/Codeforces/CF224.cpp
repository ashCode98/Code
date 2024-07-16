#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define endl '\n'

void solve(){
	ll n; cin >> n;
	string s; cin >> s;
	ll ok1 = 0, ok2 = 0;

	ll st = 0, en = n - 1;

        while(st < en){
        	if(s[st] != s[en]){
                if((s[st] - 1) == (s[en] - 1)) ok1++;
                if((s[st] + 1) == (s[en] + 1)) ok1++;
                if((s[st] - 1) == (s[en] + 1)) ok1++;
                if((s[st] + 1) == (s[en] - 1)) ok1++;
        	}
        	else{
        		ok2++;
        	}
        	st++;
        	en--;
        }
        
        if(ok2 == n/2 || ok1 + ok2 == n/2){
        	cout << "YES" << endl;
        }
        else{
        	cout << "NO" << endl;
        }
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