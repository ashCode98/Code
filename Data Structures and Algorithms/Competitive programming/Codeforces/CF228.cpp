#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    int a1 = 0, a2 = 0, temp = 1;
    int flag = 0;
    while(n > 0){
        int x = n%10;
        if(x % 2 == 0){
           a1 += (x/2)*temp;
           a2 += (x/2)*temp;
        }
        else{
            if(flag == 0){
               a1 += (x+1)/2*temp;
               a2 += (x/2)*temp;
               flag = 1;
            }
            else{
                a1 += (x/2)*temp;
                a2 += (x+1)/2*temp;
                flag = 0;
            }
        }
        temp = temp * 10;
        n = n / 10;
    }

    cout << a1 << " " << a2 << endl;
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