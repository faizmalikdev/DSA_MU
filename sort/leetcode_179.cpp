// 179. Largest Number
// Example 1:
// Input: nums = [10,2]
// Output: "210"
// Example 2:
// Input: nums = [3,30,34,5,9]
// Output: "9534330"

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // vector<int> ans;
        // // vetor<string> arr;
         vector<string> arr;
        for (int x : nums) {
            arr.push_back(to_string(x));
        }
        sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });

        if (arr[0] == "0") {
            return "0";
        }
        string ans = "";
        for (const string& s : arr) {
            ans += s;
        }
        
        return ans;
    }
};