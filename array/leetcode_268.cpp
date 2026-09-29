// 268. Missing Number
// Example 1:

// Input: nums = [3,0,1]

// Output: 2

// Explanation:

// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.u j m  

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        // for(int i=1; i<n; i++){

        // }
        for( int x : nums){
            sum = sum+x;
        }

        int wsum = (n*(n+1))/2;
        return wsum-sum;
        // return  (n*(n+1))/2 - sum
    }
};