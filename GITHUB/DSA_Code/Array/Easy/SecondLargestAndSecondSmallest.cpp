#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a = {4, 5, 3, 6, 7};

  int n = a.size();
  int smallest = a[0], largest = a[0];
  for(int i = 0; i<n; i++){
    if(a[i] < smallest)smallest = a[i];
    if(a[i] > largest)largest = a[i];
  }

  int second_smallest = INT_MAX;
  int second_largest = INT_MIN;
  for(int i = 0; i<n; i++){
    if(a[i] < second_smallest && a[i] != smallest){
      second_smallest = a[i];
    }

    if(a[i] > second_largest && a[i] != largest){
      second_largest = a[i];
    }
  }

  cout << second_largest << " " << second_smallest;
  return 0;
}
