///////////////////////
// Jalen Robinson-McClure
// CS 172-1
// EX_06_02
// November 8th, 2016
/////////////////////////

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

	string fileName;
	char c;
	int count = -1;
	cout << "Enter a file name: " << endl;
	cin >> fileName;

	ifstream input(fileName.c_str());

	if (input.fail())
		cout << fileName << " does not exist" << endl;
	else
		cout << fileName << " exists " << endl;

	while (!input.eof())
	{
		input >> c;
		++count;
	}
	cout << count << endl;


	return 0;
}