#include <bits/stdc++.h>
using namespace std;

void solve(){}

int main()
{
	int cnt = 0;
	string s;
	cin >> s;
	string ans = "";
	
	for(int i = 0; i<s.size(); i++){
		if(s[i] == ')'){
			cnt--;
		}
		cout << cnt << " ";
		if(cnt != 0){
			ans.push_back(s[i]);
		}
		if(s[i] == '('){
			cnt++;
		}
		// cout << "after statement:" << cnt << " ";
	}   
	
	// cout << ans;
    return 0;
}