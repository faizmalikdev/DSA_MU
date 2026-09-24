#include<iostream>
using namespace std;

int main(){
int sum=0;
int even=0;
int odd = 0;
int n = 6;
int arr[n] = {2,3,8,6,7,9};
// int n=sizeof(arr) /sizeof(arr[0]);
for(int i=0; i<n; i++)
    if(arr[i]%2 == 0){
      even++;
    }else{
      odd++;
    }
    cout<<even<<endl;
    cout<<odd; 
  return 0;
}