#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Person
{
    int phno;
    char name[50];
public:
    void getdata();
    void putdata();
    int retPhno();
    char* retName();
};

void Person :: getdata()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter telephone no. : ";
    cin >> phno;
}

void Person :: putdata()
{
    cout << "\nName : " << name << endl;
    cout << "Phone no. : "<< phno << endl;
}

int Person :: retPhno()
{
	return phno;
}
char* Person :: retName()
{
	return name;
}

void write_record()
{
    ofstream fout;
    fout.open("Person.dat", ios :: binary | ios :: app);

    Person p;
    p.getdata();

    fout.write((char *)&p, sizeof(p));
    fout.close();
}

void display()
{
    ifstream fin;
    fin.open("Person.dat");

    Person p;
    while(fin.read((char *)&p, sizeof(p)))
    {
        p.putdata();
    }

    fin.close();
}

void search(int n)
{
	int flag = 0;
	ifstream file;
	file.open("Person.dat", ios :: binary);

	Person obj;

	while (file.read((char*) &obj, sizeof(obj)))
	{
		if (obj.retPhno() == n)
		{
			obj.putdata();
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout << "Record is not found!!!";

	file.close();
}
void search(char n[])
{
	int flag = 0;
	ifstream file;
	file.open("Person.dat", ios :: binary);

	Person obj;

	while (file.read((char*) &obj, sizeof(obj)))
	{
		if (!strcmp(obj.retName(), n))
		{
			obj.putdata();
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout << "Record is not found!!!";

	file.close();
}

void modify_record(char n[])
{
	int flag = 0;
	fstream file;
	file.open("Person.dat", ios::in | ios::out | ios::binary);

	Person obj;

	while (file.read((char*) &obj, sizeof(obj)))
	{
		if (!strcmp(obj.retName(), n))
		{
			cout << "\nEnter the new details of Person";
			obj.getdata();

			int pos = -1 * sizeof(obj);
			file.seekp(pos, ios::cur);

			file.write((char*) &obj, sizeof(obj));

			flag = 1;
			break;
		}
	}

	if(flag == 0)
		cout << "Record is not found!!!";

	file.close();
}


int main()
{
    int ch, no1;
    char name1[50];

    while(1)
    {
    	cout << "\n\n***********MENU***********";
        cout << "\n1.Create record \n2.Display record \n3.Search by name \n4.Search by telephone number \n5.Modify telephone number \nEnter your choice : ";
        cin >> ch;
        cout << "-----------------------------------\n";
        switch(ch)
        {
            case 1: write_record();
                    break;
            case 2: cout << "List of records : ";
                    display();
                    break;
            case 3: cout << "\nEnter Phone no : ";
            	    cin >> no1;
            	    search(no1);
            	    break;
            case 4: cout << "\nEnter Name : ";
            	    cin >> name1;
            	    search(name1);
            	    break;
            case 5: cout << "To update, Enter Person Name: ";
            		cin >> name1;
            		modify_record(name1);
            		break;
            case 6: cout<<"\nExit from program...";
            		return 0;

        }
    }

}
