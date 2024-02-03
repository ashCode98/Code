#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(6);
    s.insert(77);
    s.erase(6);

    for(int it : s){
       cout << it << " ";
    }
   
    return 0;
}
