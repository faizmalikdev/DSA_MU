#include<iostream>
using namespace std;

int main(){
int sum=0;
int n=3;
// int arr[n] = {1,0,2,2,1,1,0,1,0};
int arr[n] = {1,2,0};
int H=n-1;
// int  n = arr.length()-1;
int L=0;
int M=0;
while(M<=H){
  if(arr[M] == 1){
    M++;
  }else if(arr[M] == 2){
    swap(arr[M],arr[H]);
    M++;
    H--;
  }else{
  swap(arr[L],arr[M]);
  L++;
  M++;
  }
     
    }
  
  for(int i=0; i<n; i++){

    cout<<arr[i];
  }
  return 0;
}