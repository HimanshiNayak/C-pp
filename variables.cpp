//Variable scope:
//the region in code where the existence of a var is defined

// local var: defined in side a func in braces and can be accessed only there

// global var : declared outside any func and can be accessed anywhere

// datatypes in c++ are:
//1. built -in (int float etc)
//2.used defined (struct , enum , union)
//3.derived  (array , func, pointer)

//if the local and global var are of the same name then the local one has higher precedensce

#include<iostream>

using namespace std;

	int glo =6;
	void sum(){
	    cout<<glo;
	}
	int main(){
	int glo =9;
	glo = 67;
	cout<<glo<<endl; //67
	sum();   //6
	return 0;
}

//the value off the local variable will be shown ,,but

//var name can rangge from 1 to 255 char
//begins with alpha orunderscore
//case sensitive
//no space or special char
//no reseerved words are used
