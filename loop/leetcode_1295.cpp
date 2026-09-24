// 1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums)
     {
        int even=0;
        for(int i=0; i<nums.size(); i++){
            int idx = 0;
            while(nums[i]>0){
                nums[i] /=10;
                idx++;
            }

            if(idx%2==0){
                even++;
            }
        }
        return even;
    }
};