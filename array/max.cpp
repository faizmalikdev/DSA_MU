#include<iostream>
using namespace std;

int main(){
  int n=5;
  int arr[n] = {2,3,1,5,4};
  int max=arr[0];
for(int i=1; i<n; i++)
    if(arr[i]>max){
      max = arr[i];
    }
    cout<<max;
  return 0;
}