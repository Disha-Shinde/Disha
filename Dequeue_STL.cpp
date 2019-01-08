#include<iostream>
#include<deque>
#include<cstdlib>
using namespace std;
int main()
{
	int choice, element;
	deque <int> dq;
	deque <int> :: iterator ditr;
	while(1)
	{
		cout << "**********DEQUE**********" << endl;
		cout << "\n1.Insert element at front \n2.Insert element at rear \n3.Delete front element \n4.Delete rear element ";
		cout << "\n5.Display front element\n 6.Display rear element \n7.Display DQeque \n8.Exit";
		cout << "\nEnter your Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\nEnter Element to insert at front";
			cin >> element;
			dq.push_front(element);
			break;

		case 2:
			cout << "\nEnter Element to insert at rear";
			cin >> element;
			dq.push_back(element);
			break;

		case 3:
			cout << " Delete front element ";
			dq.front();
			cout << "Deleted";
			dq.pop_front();
			break;

		case 4:
			cout << " Delete rear element ";
			dq.back();
			cout << "Deleted";
			dq.pop_back();
			break;

		case 5:
			cout << "\nFront Element:";
			cout << dq.front();
			break;

		case 6:
			cout << "\nRear Element:";
			cout << dq.back();
			break;

		case 7:
			if (dq.empty())
				cout << "\nQueue is empty!";
			else
			{
				for (ditr = dq.begin(); ditr < dq.end(); ditr++)
					cout << *ditr << "\t";
			}
			cout << endl;
			break;

		case 8:
			cout << "\nExit from Program..." << endl;
			return 0;
		}
	}

}

