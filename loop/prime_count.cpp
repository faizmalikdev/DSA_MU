#include<iostream>
using namespace std;
class Solution {
public:

    int count(int i,int n){
        for(int j=2; j<i; j++){

            if(i%j==0){
                return false;
            }
            return true;
        }
    }
    int countPrimes(int n) {
        int cnt =0;
            if(n==1 && n==0){
                return cnt;
            }
        for(int i=1; i<n; i++){
           
            if(count(i,n)){
                cnt++;
            }
            
        }
        return cnt;
    }
};

int main(){
  Solution sol;
  cout<<sol.countPrimes(10);
  return 0;
}