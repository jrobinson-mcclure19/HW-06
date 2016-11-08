///////////////////////
// Jalen Robinson-McClure
// CS 172-1
// EX_06_01
// November 8th, 2016
/////////////////////////

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
	ofstream output;

	//create file
	output.open("Exercise13_1.txt");
	srand(time(NULL));

	int number = rand() % 100;
	for (int i = 0; i < 100; i++)
	{
		output << number << endl;
		number = rand() % 100;
	}
	output.close();

	cout << "done" << endl;
	return 0;
}