// 2461. Maximum Sum of Distinct Subarrays With Length K
// xample 1:

// Input: nums = [1,5,4,2,9,9,9], k = 3
// Output: 15
// Explanation: The subarrays of nums with length 3 are:
// - [1,5,4] which meets the requirements and has a sum of 10.
// - [5,4,2] which meets the requirements and has a sum of 11.
// - [4,2,9] which meets the requirements and has a sum of 15.
// - [2,9,9] which does not meet the requirements because the element 9 is repeated.
// - [9,9,9] which does not meet the requirements because the element 9 is repeated.
// We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditions

// approach!1
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0, Max = 0;
        int n = nums.size();

        for(int i=0; i<=n-k; i++){
            unordered_set<int> s1;
            bool isDup = false;
            sum = 0;
            for(int j=i; j<i+k; j++){
                if(s1.find(nums[j]) != s1.end()){
                    isDup = true;
                    break;
                }

                s1.insert(nums[j]);
                sum += nums[j];
            }

            if(!isDup){
                Max = max(sum,Max);
            }

        }
        return Max;
    }
};


// 2 approach
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0, Max = 0;
        int n = nums.size();
        
        unordered_map<int, int> m;
        int dups = 0;

        // 1. पहली विंडो (पहले k एलिमेंट्स) के लिए प्रोसेस करें
        for(int i = 0; i < k; i++) {
            sum += nums[i];
            m[nums[i]]++;
            
            // अगर यह एलिमेंट पहले से मौजूद था और अब दोबारा आया है, तो डुप्लीकेट बढ़ाएं
            if(m[nums[i]] == 2) { 
                dups++;
            }
        }
        
        // अगर पहली विंडो में कोई डुप्लीकेट नहीं है, तो मैक्सिमम सम अपडेट करें
        if(dups == 0) {
            Max = max(sum, Max);
        }

        // 2. विंडो को आगे खिसकाएं (Sliding Window)
        for(int i = k; i < n; i++) {
            // --- पुराना (बायाँ) एलिमेंट विंडो से बाहर निकालें ---
            int left_elem = nums[i - k];
            sum -= left_elem;
            m[left_elem]--;
            
            // अगर घटने के बाद वह एलिमेंट सिर्फ 1 बार बचा है, तो इसका मतलब एक डुप्लीकेट कम हो गया
            if(m[left_elem] == 1) {
                dups--;
            }

            // --- नया (दायाँ) एलिमेंट विंडो में शामिल करें ---
            int right_elem = nums[i];
            sum += right_elem;
            m[right_elem]++;
            
            // अगर नया एलिमेंट आने से उसकी फ्रीक्वेंसी 2 हो गई, तो डुप्लीकेट बढ़ गया
            if(m[right_elem] == 2) {
                dups++;
            }

            // 3. अगर वर्तमान विंडो में कोई डुप्लीकेट नहीं है, तो मैक्सिमम सम चेक करें
            if(dups == 0) {
                Max = max(sum, Max);
            }
        }
        
        return Max;
    }
};
