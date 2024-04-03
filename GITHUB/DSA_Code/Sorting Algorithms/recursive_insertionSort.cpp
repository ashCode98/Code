#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int i , int n){
  if(i == n)return; //n is out-of-the-range
  
  for(int j = i; j>0; j--){
    if(arr[j] < arr[j-1]){  //j is current and j-1 is previous element
      swap(arr[j], arr[j-1]);
    }
  }
  insertion_sort(arr, i+1, n);
}

int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  int num = sizeof(arr) / sizeof(arr[0]);

  insertion_sort(arr, 1, num);

  /*for(auto i: arr){
    cout << i << ' ';
  }*/
  return 0;
}