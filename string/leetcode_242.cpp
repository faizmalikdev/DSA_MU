// 242. Valid Anagram
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:
// Input: s = "rat", t = "car"
// Output: false

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ans(26,0);
        for(char r : s){
            ans[r - 'a']++;
        }

        for(char a : t){
            ans[a - 'a']--;
        }
        
        for(int c : ans){
            if(c != 0){       
            return false;
        }
        }
        return true;
    }
};