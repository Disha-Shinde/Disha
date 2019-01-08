#include <iostream>
#include <fstream>
#define filename "file.txt"
using namespace std;

int main()
{
	ofstream fout;
	fout.open(filename);
	if(!fout)
	{
		cout<<"Error in creating file" << endl;
		return 0;
	}
	fout<<"HELLO WORLD!!!";
	fout.close();


	ifstream fin;
	fin.open(filename);

	if(!fin)
	{
		cout<<"Error in reading file" << endl;
		return 0;
	}

	char ch;
	while(fin.get(ch))
	{
		cout<<ch;
	}

	fin.close();

	return 0;
}
