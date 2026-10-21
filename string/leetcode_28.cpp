// 28. Find the Index of the First Occurrence in a String
// Example 1:
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

// approach 1
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        for (int i = 0; i <= n - m; i++) { //
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        return -1; //
    }
};

//approach 2
