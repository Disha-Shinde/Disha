#include <iostream>
using namespace std;


class Personal
{
	string name;
	int age;
	long int ph;
public:
	void getdata();
	void putdata();
};

class Professional
{
	int empid;
	string org;
public:
	void getdata();
	void putdata();
};

class Academics
{
	string qual;
	int mks;
public:
	void getdata();
	void putdata();
};

class Employee : Personal, Professional, Academics
{
public:
	void getdata();
	void putdata();
};


void Personal :: getdata()
{
	cout << "Enter name		: ";
	cin >> name;
	cout << "Enter age		: ";
	cin >> age;
	cout << "Enter phone no.		: ";
	cin >> ph;
}


void Professional :: getdata()
{
	cout << "Enter employee id	: ";
	cin >> empid;
	cout << "Enter organisation name	: ";
	cin >> org;
}


void Academics :: getdata()
{
	cout << "Enter qualification	: ";
	cin >> qual;
	cout << "Enter marks		: ";
	cin >> mks;
}


void Personal :: putdata()
{
	cout << "Enter name		: " << name << endl;
	cout << "Enter age		: " << age << endl;
	cout << "Enter phone no.		: " << ph << endl;
}

void Professional :: putdata()
{
	cout << "Employee id		: " << empid << endl;
	cout << "Organisation name	: " << org << endl;
}

void Academics :: putdata()
{
	cout << "Qualification		: " << qual << endl;
	cout << "Marks			: " << mks << endl;
}


void Employee :: getdata()
{
	Personal :: getdata();
	Professional :: getdata();
	Academics :: getdata();
}

void Employee :: putdata()
{
	Personal :: putdata();
	Professional :: putdata();
	Academics :: putdata();
}


int main()
{
	Employee e;
	cout << "\n********** ENTER EMPLOYEE INFORMATION **********\n\n";
	e.getdata();
	cout << "\n\n********** EMPLOYEE INFORMATION **********\n\n";
	e.putdata();
	return 0;
}
