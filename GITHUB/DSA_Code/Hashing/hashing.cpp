#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int hash[26] = {0};

    for(char i : s){
        hash[i-'a']++;
    }
    for(int i : hash){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}