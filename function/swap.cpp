#include<iostream>
using namespace std;

void swap(int &x,int &y){
  // int temp = x;
  // x=y;
  // y=temp;
    x= x^y;
    y=x^y;
    x=x^y;
  cout<<"in swap function"<<endl;
  cout<<x<<y<<endl;
  // return x,y;
}

int main(){
  int a=2;
  int b=3;
  swap(a,b);
  cout<<"in main funxtion"<<endl;
  cout<<a<<b;
  return 0;
}