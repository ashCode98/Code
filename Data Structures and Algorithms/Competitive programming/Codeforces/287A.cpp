//*ash_code98*//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){

    char ch[4][4];

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cin >> ch[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int ansCnt = (ch[i][j] == '#') + (ch[i+1][j] == '#') + (ch[i][j+1] == '#') + (ch[i+1][j+1] == '#');
            if(ansCnt != 2){
                cout << "YES";
                return;
            }
        }
    }

    cout << "NO";
    return;

}

int main(){
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}
}
