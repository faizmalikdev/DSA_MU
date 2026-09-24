#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
      int low=0;
        int high=n-1;
        bool flag = false;  
        while(low<=high){
        int mid = low +(high-low)/2;
        if(arr[mid] == key){
       return flag = true;
        }else if(arr[mid]<key){
          low=mid+1;
        }else{ 
          high=mid-1;
        }
      }
      return flag;
}


int main(){
  int arr[] = {10,20,30,40,50,60,70,80};
  int n=sizeof(arr)/sizeof(int);
        int key = 90;
    cout<<search(arr,n,key)<<endl;


}