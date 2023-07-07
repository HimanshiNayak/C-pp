//         Basic i/o using cin and cout
//cout cin cerr and clog are objects representing streams 
//cout : standard output stream , console
//cin : std input stream , console
//<< insertion operator , output streams
//>> extraction op , input streams

#include<iostream>
using namespace std;
int main(){
//	cout<<"Hello World";
//
//	
//	cout<<"Hello";          
//	cout<<"World"<<endl;    // will all be printed in the same line as no endl used in the above lines
	//**endl changes the line **
	
//	cout<<"Hello world"<<endl;
//	cout<<"Hello"<<" World"<<endl;
//	cout<<"Hello" <<" World\n";
//	cout<<"Hello\nout\nThere\n";
	// using<< will not give any spaces .. for spaces we nee dto give space inside the""
	
	int num1;
	float num2;
	double num3;
	
	cout<<"Enter a number: ";
	cin>>num1;
	
	cout<<"Enter another number: ";cin>>num2;
	cout<<"You have entered " <<num1<<"and "<<num2<<endl;
	
	
	
}


