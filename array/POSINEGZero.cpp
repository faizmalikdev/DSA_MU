#include<iostream>
using namespace std;

int main(){
int pos=0;
int neg = 0;
int zero = 0;
int n=6;
int arr[n] = {-10,9,0,-3,0,2};
for(int i=0; i<n; i++)
     if(arr[i] == 0){
       zero++;
     }else if(arr[i]>0){
      pos++;
     }else{
      neg++;
     }
     cout<<pos<<endl;
     cout<<neg<<endl;
     cout<<zero<<endl;
     
  return 0;
}