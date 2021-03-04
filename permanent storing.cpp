//we can write more than 1 constructors;
//function overloading,2 functions different parameters;
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fileout;
	fileout.open("test.txt", ios::app//append,scope resolution operator;
	string name;
	getline(cin, name);//cin input method,name variable;
	fileout<<name;
}

