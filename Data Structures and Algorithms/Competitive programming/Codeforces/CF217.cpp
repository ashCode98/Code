#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int start = 0, end = s.size()-1, count = 0;

    while(start <= end){
        if(s[start] == '1' && s[end] == '0' || s[start] == '0' && s[end] == '1'){
            count+=2;
            start++; end--;
        }
        else{
            break;
        }
    }

    cout << abs(n-count) << endl;
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
