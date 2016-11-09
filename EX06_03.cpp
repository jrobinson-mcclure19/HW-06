///////////////////////
// Jalen Robinson-McClure
// CS 172-1
// EX_06_03
// November 8th, 2016
/////////////////////////

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string Year;
	cout << "Enter a year: ";
	cin >> Year;
	string originalFileName = "Babynameranking";
	string txt = ".txt";
	string fileName = originalFileName + Year + txt;

	char gender;
	string Name;

	ifstream input(fileName.c_str());

	if (input.fail())
		cout << fileName << " does not exist" << endl;
	else
	{
		cout << fileName << " exists " << endl;

		cout << "Enter a name: ";
		cin >> Name;

		cout << "Enter a gender (upper case): ";
		cin >> gender;
		if (gender = "M")
		{
			while (!input.fail())
			{
				string brank;
				string bname;
		
				ifstream input(fileName.c_str());

				input >> brank;
				input >> bname;

				if (Name = bname)
				{
					cout << Name << "is ranked " << brank << "in year" << Year;
				}

				else
				{
					cout << "the name " << Name << "is not ranked in year " << Year;
				}

			}
			if (gender = "F")
			{
				while (!input.fail())
				{
		
					string grank;
					string gname;
					ifstream input(fileName.c_str());

					input >> gname;
					input >> grank;

					if (Name = gname)
					{
						cout << Name << "is ranked " << grank << "in year" << Year;
					}

					else
					{
						cout << "the name " << Name << "is not ranked in year " << Year;
					}

				}
		}
	}
	return 0;
}