// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prdt = 1;
        int i=0;
        while(n>0){
            int digit = n%10;
            sum +=digit;
            prdt *=digit;
            n /=10;
        }

        return prdt-sum;
    }
};