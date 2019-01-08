#include <iostream>

using namespace std;

class Error
{
public:
	Error(int x){}
	Error(float y){}
	Error(string z){}

	void errInt(int x)
	{
		cout << "Inappropriate!!!!\n";
		cout << "Value : " << x <<endl;
	}
	void errFloat(float y)
	{
		cout << "Inappropriate income!!!!\n";
		cout << "Income : " << y << endl;
	}
	void errString(string z)
	{
		cout << "Invalid city!!!!\n";
		cout << "City : " << z << endl;
	}
};

int main()
{
    int age, veh;
    float income;
	string name, city;

	cout << "*****Enter details*****";
	cout << "\n\nEnter name : ";
	cin >> name;

	cout << "Enter age (18-55) : ";
	cin >> age;
	try
	{
		if(age >= 18 && age <= 55)
		{
			cout << "Age : " << age <<endl;
		}
		else
			throw Error(age);
	}
	catch(Error e)
	{
		e.errInt(age);
	}

	cout << "Enter income (50000 - 100000) : ";
	cin >> income;
	try
	{
		if(income > 50000 && income < 100000)
		{
			cout << "Income : " << income << endl;
		}
		else
			throw Error(income);
	}
	catch(Error e)
	{
		e.errFloat(income);
	}

	cout << "Enter city (Pune / Bangalore / Chennai / Mumbai) : ";
	cin >> city;
	try
	{
		if(city == "Pune" || city == "Bangalore" || city == "Chennai" || city == "Mumbai")
		{
			cout << "City : " << city << endl;
		}
		else
			throw Error(city);
	}
	catch(Error e)
	{
        e.errString(city);
	}

	cout << "Enter vehicle information (2/4 wheeler) : ";
	cin >> veh;
    try
	{
		if(veh == 2 || veh == 4)
		{
			cout << "Vehicle : " << veh << " wheeler"<<endl;
		}
		else
			throw Error(veh);
	}
	catch(Error e)
	{
		e.errInt(veh);
	}

    return 0;
}
