#include<iostream>
using namespace std;

int main(){
int sum=0;
int n=5;
int arr[n] = {2,3,1,5,4};
for(int i=0; i<n; i++)
    sum = sum + arr[i];
    cout<<sum;
  return 0;
}