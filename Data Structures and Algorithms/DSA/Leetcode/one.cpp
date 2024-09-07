#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hash[27];

    string s = "tree";

    for(int i = 0; i<s.size(); i++){
        hash[s[i]]++;
    }

    for(int i = 0; i<26; i++){
        cout << hash[i] << endl;
    }
}
