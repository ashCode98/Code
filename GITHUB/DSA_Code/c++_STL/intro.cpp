#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> v = {32,23,35,299,1};
   for(int i : v){
      cout << i << endl;
   }
    return 0;
}
