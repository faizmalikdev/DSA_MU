#include<iostream>
using namespace std;

void  stair(int n){
  int x;
  for(int i=1; i<=n; i++){
    if(i%2==0){
       x=i;
    }else{
      x=i+1;
    }
    for(int j=1; j<=x; j++){
      
      
        cout<<"* ";
        // x++;
    }
    
    cout<<endl;
  }
}

int main(){

  int n=6;
  stair(n);
  return 0;
}