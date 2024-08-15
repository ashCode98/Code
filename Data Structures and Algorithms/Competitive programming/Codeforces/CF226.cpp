#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    int time1 = h1*60 + m1;
    int time2 = h2*60 + m2;
    int midTime = (time1 + time2)/2;

    printf("%02d:%02d", midTime/60, midTime%60);
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