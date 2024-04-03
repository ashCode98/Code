#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
  if (n == 1) return; // Base case: if array size is 1, it's already sorted.

  bool swapped = false; // Variable to track if a swap has occurred in this pass.

  for (int i = 0; i < n - 1; i++) {        
    if (arr[i] > arr[i + 1]) { // Compare adjacent elements and swap if they are in wrong order.
      swap(arr[i], arr[i + 1]); // Swapping adjacent elements.
      swapped = true; // Set swapped to true as a swap has occurred.
    } 
  }

  if (swapped==false) return; // If no elements were swapped, the array is sorted.

  //Recursively call for the next pass, without including the last element.
  //The last element of this pass is already in its correct position.
  bubble_sort(arr, n - 1);
}


int main() {
  int arr[] = {2, 13, 4, 1, 3, 6, 28};
  int n = sizeof(arr) / sizeof(arr[0]);

  bubble_sort(arr, n);

//  for (auto i : arr) {
//    cout << i << " ";
//  }
  cout << '\n';

  return 0;
}