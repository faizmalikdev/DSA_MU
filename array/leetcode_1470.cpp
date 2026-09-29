// 1470. Shuffle the Array
// Input: nums = [2,5,1,3,4,7], n = 3
// Output: [2,3,5,4,1,7] 
// Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      // vector<int> ans1(nums.size()/2);
    //   vector<int> ans2(nums.size()/2);
    //   for(int i=0; i<n; i++){
    //     ans1[i] = nums[i];
    //   } 
    //   int ixd = 0;
    //   for(int i=n; i<nums.size(); i++){
    //     ans2[ixd++] = nums[i];
    //   }
    // //    nums[0] = ans1[0];
    //    int y =0;
    //    int x=1;
    //   for(int i=1; i<nums.size(); i++){
    //     if(i%2 != 0){
    //     nums[i] = ans2[y++];
    //     }else{
    //         nums[i] = ans1[x++];
    //     }
    //   }
    //   return nums;
    // second approach
    vector<int> ans(2*n);
    for(int i=0; i<n; i++){
        ans[2*i] = nums[i];
        ans[2*i+1] = nums[i+n];
    }
    return ans;
    
    }
};