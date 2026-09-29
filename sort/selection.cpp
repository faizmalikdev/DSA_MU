// incpm
 
#include<iostream>
#include<String>
using namespace std;

int main(){
 int arr[] = {2,1,5,3,4};
 int n = sizeof(arr)/sizeof(int);
 for(int i=0; i<n-1; i++){
   int min =i;
   for(int j=i+1; j<n; j++){
    if(arr[min]>arr[j]){
      min=j;
    }
  }
  swap(arr[i],arr[min]);
 }
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}

 }