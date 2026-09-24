// 202. Happy Number

class Solution {
public:

    int happy(int num){
        int sum =0;

        while(num>0){
            int digit=num%10;
            sum +=digit*digit;
            num /=10;
        }
    return sum;
    }
    bool isHappy(int n) {
      
        unordered_set<int> set;


        while (n != 1) {
           if(set.count(n)){
            return false;
           }

           set.insert(n);
           n=happy(n);
        }
        return true;
    }
};