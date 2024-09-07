#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
   int n;cin >> n;
   int flag = 1;
   while(n--){
    int x;
    cin >> x;
      if(x%2==0){
        cout << (x/2) << endl;
      }
      else{
        cout << (x+flag)/2 << endl;
        flag = flag*-1;
      }
   }
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int testcase = 1;
    // cin >> testcase;
	while(testcase--){
	   solve();
	}
}
