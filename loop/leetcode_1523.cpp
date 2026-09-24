// 1523. Count Odd Numbers in an Interval Range

class Solution {
public:
    int countOdds(int low, int high) {
        int ixd=0;
       for(int i=low; i<=high; i++){
            if(i%2 !=0){
                ixd++;
            }
       }
       return ixd;
    }
};
