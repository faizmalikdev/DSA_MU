#include<iostream>
using namespace std;

int main(){
  cout<<"enter any number for calculation.."<<endl;
  int num1,num2;
  cout<<"enter first number"<<endl;
  cin>>num1;
  cout<<"enter second number"<<endl;
  cin>>num2;
  cout<<"Add for 1"<<endl;
  cout<<"Sub for 2"<<endl;
  cout<<"Mul for 3"<<endl;  
  cout<<"Div for 4"<<endl;
  cout<<"Mod for 5"<<endl;
  int n;
  cin>>n;

  switch (n)
  {case 1:
    cout<<"addition is:"<< num1+ num2;
    break;
  case 2:
    cout<<"subtraction is:"<< num1 - num2;
    break;
    case 3: cout<<"multiply is:"<<num1*num2;
    break;
    case 4: cout<<"division is:"<<num1/num2;
    break;
    case 5 : cout<<"mod is:"<<num1%num2;
    break; 
    default:
    cout<<"enter valid number";
    break;
  }
  
}