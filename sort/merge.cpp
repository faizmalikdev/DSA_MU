#include<iostream>
#include<vector>
// #include<String>
using namespace std;

int merge(int arr[],int si,int mid,int ei){
  int i=si;
  int j=mid+1;
  vector<int> temp;

  while(i<=mid && j<=ei){
  if(arr[i]<=arr[j]){
    temp.push_back(arr[i++]);
  }else{
    temp.push_back(arr[j++]);
  }
}

  while(i<=mid){
    temp.push_back(arr[i++]);
  }
  while(j<=ei){
   temp.push_back(arr[j++]);
    }

    for(int i=si,x=0; i<=ei; i++){
          arr[i] = temp[x++];
    }
}

void mergeSort(int arr[],int si,int ei){
      if(si>=ei){
        return ;
      } 
  
        int mid= (si+ei)/2;
        mergeSort(arr,si,mid);
        mergeSort(arr,mid+1,ei);
        merge(arr,si,mid,ei);
        
      

}
 



int main(){
 int arr[] = {5,4,1,3,2 };
 int n = sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}

 }