// Kyle Cheng    CS1C M/W 230pm
// Lab 2: Hello world project
//================================================
//main

#include <iostream>
using namespace std;

int hello1Function(string name1);
int hello2Function (string name2);

int main()
{
	string name1 = "Kyle Cheng";
	hello1Function(name1);
	string name2 = "Kyle Cheng";
	hello2Function (name2);
	
	return 0;
}
