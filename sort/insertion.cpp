#include<iostream>
#include<String>
using namespace std;

int sort(int arr[],int n){

  for(int i=1; i<n; i++){
     int curr = arr[i];
   int pre = i - 1; 
  //  for(int j=i+1; j<n; j++){
    while(pre >= 0 && arr[pre]>curr){
      // swap(arr[pre],arr[pre + 1]);
      arr[pre+1] = arr[pre];
      pre--;
    }
      arr[pre+1] = curr;
  }
 }
 
// return arr[];


int main(){
 int arr[] = {2,1,5,3,4};
 int n = sizeof(arr)/sizeof(int);
    sort(arr,n);
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}

 }