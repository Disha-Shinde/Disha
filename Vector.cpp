#include <iostream>
using namespace std;

template <class T>
class vector
{
  T *a;
  int n;
public:
  vector()
  {
      a = new T;
  }
  void create();
  void modify();
  void scalar();
  void display();
	
};

template <class T>
void vector <T> :: create()
{
	cout << "\n\n***************VECTOR CREATION***************\n\n";
	cout << "Enter the total no. of elements : ";
	cin >> n;
	cout << "Enter the " << n << " elements : ";
	for(int i=0;i<n;i++)
		cin >> a[i];
}

template <class T>
void vector <T> :: display()
{
	int i;
	cout << "(";
	for(i=0;i<n-1;i++)
		cout << a[i] << ",";
	cout << a[i] << ")\n";
}

template <class T>
void vector <T> :: scalar()
{
	int k;
	cout << "Enter the scalar no. : ";
	cin >> k;
	for(int i=0;i<n;i++)
		a[i] = a[i] * k;
}

template <class T>
void vector <T> :: modify()
{
	T m,mod;
	int i, flag = 0;
	cout << "Enter the element to be modified : ";
	cin >> mod;
	for(i=0;i<n;i++)
	{
		if(a[i] == mod)
		{
			flag = 1;
			cout << "Enter the new value : ";
			cin >> m;
			a[i] = m;
			cout << "Modified vector is : ";
			break;
		}
	}
	if(flag == 0)
	{
		cout << "Value not found\n";
		cout << "Vector is not modified : ";
	}
}

int main()
{
	int op;
	vector <int> v, v1;
	v.create();
	cout << "\nGiven vector is : ";
	v.display();
	/*v1.create();
	cout << "\nGiven vector1 is : ";
	v1.display();
	v + v1;*/

	while(1)
	{
		cout << "\n\n**********VECTOR OPERATIONS**********\n";
		cout << "1.Modify\n2.Scalar multiplication\n3.Exit\nEnter your choice : ";
		cin >> op;
		switch(op)
		{
		case 1 :v.modify();
				v.display();
				break;
		case 2 :v.scalar();
				cout << "New vector obtained is : ";
				v.display();
				break;
		case 3 :cout << "\n\n\nExit program....";
		        return 0;
		default :cout << "Invalid choice";
		}
	}


}
