// 26. Remove Duplicates from Sorted Array

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        if(nums.empty())
        return 0;
        // vector<int> ans(nums.size());
        for( int i=0; i<nums.size(); i++){
            if(nums[i] != nums[k-1]){
               nums[k] = nums[i];
               k++;
            }
        }
        // int j=0;
        //  for(int i=0; i<=k+1; i++){
        //     nums[i] = ans[i];
        //  }
         return k;
    }
};