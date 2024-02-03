#include<bits/stdc++.h>
#include <cstdint>
using namespace std;

void merge(int arr[], int l, int mid, int r){
  int left = l; // starting point of 1st array
  int right = mid+1;  // starting point of 2nd array
  
  vector<int> temp;
  
  while(left <= mid && right <= r){
    if(arr[left] <= arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }
    
    while(left <= mid){
      temp.push_back(arr[left]);
      left++;
    }
    
    while(right <= r){
      temp.push_back(arr[right]);
      right++;
    }
    
  for(int i = 0; i<temp.size(); i++){
    arr[l++] = temp[i];
  }
  cout << endl;
}

void merge_sort(int arr[], int l, int r){
  if(l < r){   //l<r means there is atleast 2 elements and l==r means there is single element
    int mid = (l+r)/2;
    merge_sort(arr, l, mid);  //recursive function
    merge_sort(arr, mid+1, r); //recursive function  
    merge(arr, l, mid, r); //merge 2 sorted arrays in 1 array
  }
}

int main(){
  int n; cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++)cin >> arr[i];
  
  merge_sort(arr, 0, n-1);
  
  for(int i = 0; i<n; i++)cout << arr[i] << ' ';
}