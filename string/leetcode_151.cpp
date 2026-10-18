// 151. Reverse Words in a String
// Given an input string s, reverse the order of the words.
// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
// Return a string of the words in reverse order concatenated by a single space.

// Example 1:
// Input: s = "the sky is blue"
// Output: "blue is sky the"
class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        int n=s.size();
        reverse(s.begin(), s.end());
        while(j<n){

            while(j<n && s[j] == ' ') j++;
            
            if(j == n) break;

            if(i>0){
                s[i] =' ';
                i++;
            }

            int st = i;
            
            while(j<n && s[j] != ' '){
                s[i] = s[j];
                i++,j++;
            }

            reverse(s.begin()+st,s.begin()+i);


        }
            s.resize(i);
        return s;
    }
};