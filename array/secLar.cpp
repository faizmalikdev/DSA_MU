#include<iostream>
using namespace std;

int main(){
  int n=5;
  int arr[n] = {1,6,4,5,7,9};
  int max=arr[0];
  int secMax=max;
  int   thirdLar = secMax;
for(int i=1; i<n; i++)
    if(arr[i]>max ){
      max = arr[i];
    } if(secMax>=thirdLar){
      secMax = thirdLar;
    }else{
       secMax = thirdLar;
    }

    
    cout<<secMax;
  return 0;
}