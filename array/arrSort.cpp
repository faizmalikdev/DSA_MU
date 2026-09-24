#include<iostream>
using namespace std;

int main(){
int sum=0;
int n=7;
int arr[n] = {1,0,0,3,0,1,1};
int j=6;
// int  n = arr.length()-1;
int i=0;
while(i<j){
    if(arr[i] <= arr[j]){
       j--;
    }  
    if(arr[i]>arr[j]){
      int temp = arr[j];
      arr[j]=arr[i];
      arr[i]= temp;
      i++;
      j--;
    }
  }
  for(int i=0; i<n; i++){

    cout<<arr[i];
  }
  return 0;
}