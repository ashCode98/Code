#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> words = {"bella", "label", "roller"};

    sort(words[0].begin(), words[0].end());
    sort(words[1].begin(), words[1].end());
    sort(words[2].begin(), words[2].end());

    cout << words[0] << endl;
    cout << words[1] << endl;
    cout << words[2] << endl;

    // for(int i = 0; i<words.size(); i++){
    //     for(int j = 0; j<words[i].size(); j++){
    //         cout << words[i][j] << " ";
    //     }
    // }
}