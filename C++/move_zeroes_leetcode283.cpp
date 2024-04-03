#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){  //finding the first 0 and j is assigned to it
                j = i;
                break;
            }
        }

        if(j == -1){  //it means, there are no zero elements in array
            return;
        }

        for(int i = j+1; i<nums.size(); i++){ //start iterating from j+1
            if(nums[i] != 0){  //finding non-zero element 
                swap(nums[j], nums[i]); //and then swap j'th and i'th element
                j++; //increasing j to make sure it remains on first 0
            }
        }
    }
};