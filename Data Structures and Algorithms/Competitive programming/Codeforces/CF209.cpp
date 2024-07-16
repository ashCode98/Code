#include<iostream>
using namespace std;

#define endl '\n'

void solve(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n; cin >> n;
    int row = 0;
    for(int i = 0; i<=n; i++){
        for(int j = n-i; j>0; j--){
            cout << "  ";
        }

        for(int j = 0; j<=i; j++){
            cout << j << " ";
        }

        for(int j = 1; j<=i; j++){
            cout << abs(j-i) << " ";
        }
        cout << endl;
    }
    
    for(int i = n-1; i>=0; i--){
        for(int j = n-i; j>0; j--){
            cout << "  ";
        }

        for(int j = 0; j<=i; j++){
            cout << j << " ";
        }

        for(int j = 1; j<=i; j++){
            cout << abs(j-i) << " ";
        }
        cout << endl;
    }
}

int main(){
	int t = 1;
    while(t--){
    	solve();
    }
}