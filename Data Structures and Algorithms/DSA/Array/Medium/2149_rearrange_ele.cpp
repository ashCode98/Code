#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {3, 1, -2, -5, 2, -4};

    int negative = 1;
    int positive = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i] < 0){
            // cout << v[i] << " ";
            swap(v[i], v[negative]);
            negative = negative + 2;
            // cout << negative << " ";
        }
        else{
            swap(v[i], v[positive]);
            positive = positive + 2;
        }
    }

    for(auto i: v){
        cout << i << " ";
    }
}