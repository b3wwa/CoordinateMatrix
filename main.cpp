#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
	//read from file with stringstream, also works

	/*
	ifstream file("coordinates.txt");
	string line;
	stringstream strm;
	if (file.is_open())
	{
		while (getline(file, line))
		{
			strm << line << endl;
		}
		file.close();
	}

	cout << strm.str() << endl;
	*/
	
	//read from file each char
	fstream ifs;
	ifs.open("coordinates.txt");
	char ch;
	while (ifs.get(ch))
	{
		cout << ch;
	}
	cout << endl;

	cout << "running" << endl;
	return 0;
}
