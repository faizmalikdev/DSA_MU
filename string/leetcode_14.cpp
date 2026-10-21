// 14. Longest Common Prefix

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// approach 1
class Solution {
public:
    int findCount(string s1, string s2 ){
        if(s1.size() == 0 || s2.size() == 0){
            return 0;
        }
        if(s1.size() > s2.size()){
            return findCount(s2,s1);
        }
        int cnt =0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i] != s2[i]){
                return cnt;
            }
            cnt++;
        }
        return cnt;

    }

    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0 ){
            return "";
        }
        if(strs.size() == 1){
            return strs[0];
        }
        int Min = INT_MAX;
        string first = strs[0];
        for(int i=1; i<strs.size(); i++){
           int cnt = findCount(first,strs[i]);
            Min = min(cnt,Min);
        }
    return first.substr(0,Min);
    }
};

// approach 2

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // 1. बेस केस: यदि वेक्टर खाली है तो खाली स्ट्रिंग लौटाएं
        if (strs.empty()) return "";

        // 2. int को बदलकर string किया
        int minLen = strs[0].size();
        for(string str : strs){
            minLen = min(minLen, (int)str.size());
        }

        int i = 0;
        while(i < minLen){
            int j = 0;
            while(j < strs.size() - 1){
                // 3. Java के charAt को हटाकर सही C++ सिंटैक्स (अक्षरों की तुलना) का उपयोग किया
                if(strs[j][i] != strs[j+1][i]){
                    return strs[0].substr(0, i);
                }
                j++;
            }
            i++;
        }
        // 4. str[0] की जगह सही वेरिएबल strs[0] लिखा
        return strs[0].substr(0, i);
    }
};
