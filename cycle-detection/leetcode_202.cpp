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
        int slow = n;
        int fast = happy(n);
        while (fast != 1 && slow != fast) {
            slow = happy(slow);
            fast = happy(happy(fast));
        }

        return fast == 1;
    }
};