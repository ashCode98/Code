#include<iostream>
#include <utility>
using namespace std;
int main(){
    int arr[] = {2, 13, 4, 1, 37};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i<n-1; i++){
      for(int j = 0; j<n-j; j++){
         if(arr[j] > arr[j+1]){
           swap(arr[j], arr[j+1]);
         }
      }
    }
    
    for(auto i:arr){
      cout << i << " ";
    }

    return 0;
}