#include<bits/stdc++.h>
using namespace std;

int part(int arr[], int low, int high){
  int pivot = arr[low];
  int i = low;
  int j = high;
  
  while(i < j){
    while(arr[i] <= pivot && i < high){
      i++;
    }
    
    while(arr[j] > pivot && j > low){
      j--;
    }
    
    if(i < j) swap(arr[i], arr[j]);
  }
  
  swap(arr[j], arr[low]);
  return j;
}

void quick_sort(int arr[], int low, int high) {
  if (low < high) {
    int partition_index = part(arr, low, high);
    quick_sort(arr, low, partition_index - 1);
    quick_sort(arr, partition_index + 1, high);
  }
}


int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  quick_sort(arr, 0, n-1);
  
  for(auto i: arr){
    cout << i << " ";
  }
  return 0;
}
