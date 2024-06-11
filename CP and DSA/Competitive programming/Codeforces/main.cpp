#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "paper";
	string t = "title";
	
	unordered_map<char, int>mp1, mp2;

        for(int i = 0; i<s.size(); i++){
            mp1[s[i]] = i+1;
            mp2[t[i]] = i+1;
        }

		for(int i = 0; i<s.size(); i++){
			cout << mp1[s[i]] << ' ';
		}
		cout << endl;
		for(int i = 0; i<s.size(); i++){
			cout << mp2[t[i]] << ' ';
		}

        // for(int i = 0; i<s.size(); i++){
            // if(mp1[s[i]] != mp2[t[i]]){
                // return false;
            // }
        // }
        // return true;
}	
