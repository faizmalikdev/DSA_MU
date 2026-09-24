#include<iostream>
using namespace std;

int main(){
  int marks;
    cout<<"enter your age:";
    cin>>marks;
    if(marks>33){
    cout<<"fail!!";
  }else if(marks <= 33 && marks >=80 ){
    cout<<"A";
  }else{
    cout<<"A+";
  }

  return 0;
}