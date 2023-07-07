#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   int a = 45;
   cout<<"The value of a is:"<<a<<endl;
   a = 5;
   cout<<"The value of a is:"<<a<<endl;
  char c = 'g';
  cout<<"The value of c is:"<<c<<endl;
    c = '7';  // since its a char the value should be there in '' .. otherwise error
  cout<<"The value of c is:"<<c<<endl;
  
  // constants in c++
  
  const int b = 5;
  cout<<"the value of b is "<<b<<endl;
//  b = 8;  cant be changed as is read only
  cout<<b<<endl;
  
  // manipulators in c++ : those which change the display of output
  
  //1. endl
  //2 . setw makes the numbers staert from right or sets width (iom
  
    int x = 3 , y = 89 , z =9;
    cout<<"the value of x without setw is:"<<x<<endl;
  cout<<"the value of y without setw is:"<<y<<endl;
  cout<<"the value of z without setw is:"<<z<<endl;
  
  cout<<"the value of x with setw is:"<<setw(3)<<x<<endl;
  cout<<"the value of x with setw is:"<<setw(3)<<y<<endl;
  cout<<"the value of x with setw is:"<<setw(3)<<z<<endl;
  return 0;
   
}
