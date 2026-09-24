#include<iostream>
using namespace std;

int main(){
  cout<<"enter first number"<<endl;
  int num1,num2,n;
  cin>>num1;
  cout<<"enter second number"<<endl;
  cin>>num2;
  cout<<"Add with assign for 1"<<endl;
  cout<<"Sub with assign for 2"<<endl;
  cout<<"Mul with assign for 3"<<endl;  
  cout<<"Div with assign for 4"<<endl;
  cout<<"assign for 5"<<endl;
  cin>>n;
  num1 = num2;
 
  num1 = num1-=num2;
  num1 = num1*=num2;
  num1 = num1/=num2;
  
  
  cout<<" number:"<<num1<<endl;
  cout<<"add with assign:"<<num1<<endl;
  cout<<"sub with assign:"<<num1<<endl;
  cout<<"add with assign:"<<num1<<endl;
  cout<<"add with assign:"<<num1<<endl;

  return 0;
}