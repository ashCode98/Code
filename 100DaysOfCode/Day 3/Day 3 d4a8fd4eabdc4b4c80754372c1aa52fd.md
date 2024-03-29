# Day 3

- [x]  solve leetcode problem 1 [https://leetcode.com/problems/missing-number/description/](https://leetcode.com/problems/missing-number/description/)
- [ ]  solve leetcode problem 2 [https://leetcode.com/problems/max-consecutive-ones/description/](https://leetcode.com/problems/max-consecutive-ones/description/)
- [ ]  Solve 1 or more codeforces problem
- [ ]  Complete excercise 3, 4, 5
- [ ]  Continue chai or code JavaScript part 2
- [ ]  Start watching hitesh chaudhry css crash course on PW skills channel
- [ ]  [https://drive.google.com/drive/folders/1W2bCjekTJ4wA5eI6aoAQryXBAKBMK-HZ?usp=drive_link](https://drive.google.com/drive/folders/1W2bCjekTJ4wA5eI6aoAQryXBAKBMK-HZ?usp=drive_link) complete this 1st project from 50 projects in 50 days
- [ ]  Post Day 3 of #100DaysOfCode challenge blog on Hashnode, Medium, Dev.to, hashnode and twitter

## What I learned?

I learned the following topics:

- XOR operator (0 ^ a = a,  a ^ a = 0)

## What I developed/solved?

- Solved 1 leetcode easy problem no.268 using XOR operator

## Difficulties I am facing.

## Code snippet/Screenshots/notes

1. **Leetcode 268. Find the missing number in an array**
- Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(*between 1 to N*), that is not present in the given array.

Example. 

- input -  `nums = [9,6,4,2,3,5,7,0,1]`
- output - `8`  , `8 is the missing number in the range`

- Brute force approach -

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int answer = 0;
        //iterate for [1, n] to check if any num of missing
        for(int i = 1; i<=n; i++){  
            int flag = 0;
            //iterate through the entire array to check missing num
            for(int j = 0; j<n; j++){
                if(nums[j] == i){
                    flag = 1; //meaning num is present
                    break;
                }
            }
            if(flag == 0){ //meaning num is not present and that is the answer
                answer = i;
            }
        }
        return answer;
    }
};
//Time Complexity: O(n) * O(n) = O(n^2)
//space complexity: O(1), becausue we are not using any extra space
```

- Better solution using map -

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int finalAnswer = -1;
        int size = nums.size();
        map<int, int> m;

        //map array elements in key-value pair and increase its value from 0 to 1
        for(int i = 0; i<size; i++){
            m[nums[i]]++;
        }
        
        /* if we found map value 0, meaning that key was not found while mapping
        that key will be our final answer*/
        for(int i = 0; i<size+1; i++){
            if(m[i] == 0){
               finalAnswer = i;
               break;
            }
        }
        return finalAnswer;
    }
};
//Time Complexity: O(n), where n is the size the an array
//space complexity: O(n), because we are using map to store key-value pairs
```

> This problem have multiple optimal solutions: 1. sum and 2. XOR
> 
- **Optimal Approach 1** using **sum**

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s1 = (n*(n+1))/2; //sum of first n numbers
        int s2 = 0; 
        //sum of all the array elements
        for(int i = 0; i<n-1; i++){
            s2 = s2 + nums[i];
        }
        /*difference between s1(sum of n numbers) and s2(sum of array elements) 
        will be the missing number
        */
        return s1-s2;
    }
};

/*
Time Complexity: O(n), n = is the numbers of elements in an array
Space complexity: O(1), because we are not using any extra space  
*/
```

- Optimal Approach 2 using XOR

> note : 1 ^ 1 = 0, 4 ^ 4 = 0 and 0 ^ 5 = 5, 0 ^ 9 = 9
> 

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0;
        int xor2 = 0;
        for(int i = 1; i<=nums.size(); i++){
            xor1 = (xor1 ^ i); //xor of 1 to n
            xor2 = (xor2 ^ nums[i-1]); //xor of all the array elements
        }
        return xor1 ^ xor2;
    }
};

/*Example: nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]
  xor1 = 1^2^3^4^5^6^7^8^9
  xor2 = 0^1^2^3^4^5^6^7^9
  
  answer = xor1 ^ xor2 
         = (1^1)^(2^2)^(3^3)^(4^4)^(5^5)^(6^6)^(7^7)^(8)^(9^9)
         = ( 0 )^( 0 )^( 0 )^( 0 )^( 0 )^( 0 )^( 0 )^(8)^( 0 ) 
         -> 0^0 = 0, all the 0^0 becomes 0
         -> 0^8 = 8, this is our answer 
  
  time complexity: O(N), where n is the number of elements in an array
                  and we are iterating for once
  space complexity: O(1)
  
  */
  
```