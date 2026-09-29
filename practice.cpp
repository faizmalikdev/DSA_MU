      #include<iostream>
      using namespace std;
    
void reverse(int nums[],int i,int k){
         while(i<=k){
            int temp = nums[k];
            nums[k]= nums[i];
            nums[i] = temp;
            k--; 
            i++;
        }
    }

    void printArray(int arr[], int n){
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
    }
    
      int main(){
        int  nums[] = {1,2,3,4,5,6,7};
        int k = 3;
        // void rotate(vector<int>& nums, int k) {
       int i=0;
       int j=6;
       reverse(nums,i,j);
       reverse(nums,i,k-1);
       reverse(nums,k,j);
    
       
        printArray(nums, sizeof(nums) / sizeof(nums[0]));
        return 0;
      }