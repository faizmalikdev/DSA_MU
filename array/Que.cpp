#include<iostream>
using namespace std;

int main(){
int n=5;
int arr[n] = {2,4,8,9,1};
// int temp[n] = {0};
for(int i=0; i<n; i++){
int j = 4;
     if(i != j){
      int temp = arr[j];
      arr[j]=arr[i];
      arr[i]= temp;
      j--; 
     }
    }
    for(int x=0; x<n; x++){
     cout<<arr[x]<<" ";
    }
  return 0;  
}

// #include<iostream>
// using namespace std;

// int main(){
// int n=5;
// int arr[n] = {2,4,8,9,1};
// // int temp[n] = {0};
// for(int i=0; i<n; i++){
//   int j = 4;
//       int temp = arr[i];
//          arr[j] = temp;
//          j--; 
//     }
//     for(int x=0; x<n; x++){
//      cout<<arr[x]<<" ";
//     }
//   return 0;
// }