#include <iostream>
using namespace std;


class Calci
{
	int nNum1,nNum2;
public:

	void getData();
	void add();
	void sub();
	void mul();
	void div();
	void mod();
};


void Calci::getData()
{
        cout<<"Enter 2 numbers:";
        cin>>nNum1>>nNum2;
}
void Calci::add()
{
        cout<<"\n\nAddition : "<<(nNum1+nNum2)<<endl;
}
void Calci::sub()
{
        cout<<"\n\nSubtraction : "<<(nNum1-nNum2)<<endl;
}
void Calci::mul()
{
        cout<<"\n\nMultiplication : "<<(nNum1*nNum2)<<endl;
}
void Calci::div()
{
        cout<<"\n\n Division : "<<(float(nNum1)/nNum2)<<endl;
}
void Calci::mod()
{
        cout<<"\n\nModulus : "<<(nNum1%nNum2)<<endl;
}


int main()
{
	Calci c;
	char op,ch;
	c.getData();


	do
	{
		cout<<"\n\n****MENU****\n 1.+ \n 2.- \n 3.* \n 4./ \n 5.% \n Enter operator : ";
		cin>>op;

		switch(op)
		{
			case '+':c.add();
					 break;
			case '-':c.sub();
					 break;
			case '*':c.mul();
					 break;
			case '/':c.div();
					 break;
			case '%':c.mod();
					 break;
		    default: cout<<"Invalid operator!!!!!"<<endl;
		}//switch

		cout<<"\n\nIf user wants to continue(y/n) : ";
		cin>>ch;

	}while(ch=='y' || ch=='Y');


	cout<<"\n\nExit from program."<<endl;
	return 0;

}//main
