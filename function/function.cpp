#include<iostream>
using namespace std;

int add(int &a){
  a=100;
  return a;
}

int main(){
  int a=4;
  int c = add(a);
  cout<<"add is:"<<c; 
  
  return 0;

}