#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcde";
    string goal = "cdeab";

    string su = s+s;

    for (int i = 0; i < su.size(); i++){
        for (int len = 1; len <= su.size()-i;  len++){
            if(s.substr(i, len) == goal){
                return true;
            }
        }
    }
    return false;
}
