#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
  for(int i = 1; i<n; i++){
    for(int j = i; j>0; j--){
      if(arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
      }
    }
  }

  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
}

int main() {
  int num;
  cin >> num;
  int arr[num];
  for(int i = 0; i<num; i++){
    cin >> arr[i];
  }

  insertion_sort(arr, num);

  return 0;
}