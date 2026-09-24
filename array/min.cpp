#include<iostream>
using namespace std;

int main(){
int min=INT8_MAX;
int n=5;
int arr[n] = {2,3,1,5,4};
for(int i=0; i<n; i++)
    if(arr[i]<min){
      min = arr[i];
    }
    cout<<min;
  return 0;
}