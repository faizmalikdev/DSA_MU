//724. Find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int k = nums.size()-1;
        for(int i=0; i<nums.size(); i++){
            int sum1= 0;
            int sum2=0;
            for(int j=0; j<i; j++){
              sum1 += nums[j];
            }
            for(int x=k; x>i; x--){
                sum2 += nums[x]; 
            }

            if(sum1 == sum2){
                return i;
            }

        }
        return -1;
    }
};