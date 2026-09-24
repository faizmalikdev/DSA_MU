// 1342. Number of Steps to Reduce a Number to Zero

class Solution {
public:
    int numberOfSteps(int num) {
        int zero=0;
        if(num%2 != 0){
                num -= 1;
                zero++;   
        }
        while(num>0){
            num /=2;
            zero++;
            if(num%2 != 0){
                num -= 1;
                zero++;
            }
        }
        return zero;
    }
};