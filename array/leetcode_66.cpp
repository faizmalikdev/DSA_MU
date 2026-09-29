// 66. Plus One
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
EXAMPLE :
Input: digits = [9,9]
Output: [1,0,0]

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          int n = digits.size()-1;
          for(int i=n; i>=0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i] = digits[i]+1;
                return digits ;
            }
          }

          vector<int> ans(digits.size() + 1);
          ans[0] = 1;
     return ans;
    }
};