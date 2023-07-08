//types of constants in c++

//1.literal contsnts: the most obvious type of constant ..eg: int x =9; float y =9.87 etc.
//   integer literal constants: 12 - an int ,12U - unsigned int , 12L - long int, 12LL- long long int
// floating point literal const : 12.1 - double const , 12.1F - float , 12.1L - long double

// escape codes like \n , \t etc come under char literal const
// to declare a const we use the const keyword: 
//    const double pi{3.1415962} etc . only pi = 2.5 gives compiler error

//defined const : # define pi 3.1415962 .. the pre processor just replace pi with the value everywhere
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
