// 387. First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string str) {
        unordered_map<char,int> m;
        for(char s : str){
                m[s]++;
            }
    

        for(int i=0; i<str.size(); i++){
            if(m[str[i]] == 1){
                return i;

            }
        }
        return -1;
    }
};