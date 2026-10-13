      #include<iostream>
      #include<vector>
      using namespace std;

    void printArray(int arr[], int n){
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
    }
    
      int main(){
        int nums[] = {1,2,3};
       int i=0;
       int j=2;
         while(i<j){
            if(nums[i]<nums[j]){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i+1] = temp;
            }else{
                // arr.sort();
            }
          }
       
        printArray(nums, sizeof(nums) / sizeof(nums[0]));
        return 0;
      }