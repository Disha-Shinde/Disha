#include<iostream>
#include<cstring>
using namespace std;

class student
{
    char name[20], cls[3], div, dob[15], bg[5], add[20], drv[10];
    int roll_no, ph;
    static int counter;

public:
    void get_data();
    void put_data();
    student()
    {
        roll_no = 0;
        strcpy(name,"");
        strcpy(cls,"SE");
        div = 'B';
        strcpy(add,"");
        strcpy(dob,"");
        strcpy(bg,"");
        strcpy(drv,"");
        ph = 0;
    }
    student(student &s)
    {
        roll_no = ++counter;
        strcpy(name, s.name);
        strcpy(cls, s.cls);
        div = s.div;
        strcpy(add, s.add);
        strcpy(dob, s.dob);
        strcpy(bg, s.bg);
        strcpy(drv, s.drv);
        ph = s.ph;
    }
    student(char tname[20], char tcls[3], char div, char tadd[20], char tdob[15], char tbg[5], char tdrv[10], int tph )
    {
        counter++;
        this->roll_no = counter;
        cout<<"\n\nAssigning details to student [" << roll_no << "]" <<endl;
        strcpy(this->name, tname);
        strcpy(this->cls, tcls);
        this->div = div;
        strcpy(this->add, tadd);
        strcpy(this->dob, tdob);
        strcpy(this->bg, tbg);
        strcpy(this->drv, tdrv);
        this->ph = tph;
    }
    ~student()
    {
        cout << "student data deleted." <<endl;
    }
    static int get_no();

};

int student::counter=0;

int student::get_no()
{
    return counter;
}


void student::get_data()
{
    counter++;
    roll_no=counter;
    cout << "Enter details of Student [" << roll_no << "] \n\n";
    cout << "Roll No.	:  " << roll_no << endl;
    cout << "Name		:  ";
    cin >> name;
    cout << "Class		:  ";
    cin >> cls;
    cout << "Div		:  ";
    cin >> div;
    cout << "Address		:  ";
    cin >> add;
    cout << "Date of birth	:  ";
    cin >> dob;
    cout << "Blood group	:  ";
    cin >> bg;
    cout << "Driving license	:  ";
    cin >> drv;
    cout << "Phone no.	:  ";
    cin >> ph;

}

void student::put_data()
{
    cout << "----------------------------------------";
    cout << "\nName		:  " << name << endl;
    cout << "Roll no.	:  " << roll_no << endl;
    cout << "Class		:  " << cls << endl;
    cout << "Division	:  " << div << endl;
    cout << "Address		:  " << add << endl;
    cout << "Date of birth	:  " << dob << endl;
    cout << "Blood group	:  " << bg << endl;
    cout << "Driving license	:  " << drv << endl;
    cout << "Phone no.	:  " << ph << endl;

}



int main()
{
    int n;
    cout << "Enter total no. of students  :  ";
    cin>>n;
    //student s[n];
    student *s = new student[n];

    for(int i=0;i<n;i++)
        s[i].get_data();

    cout << "--------------STUDENT INFORMATION----------------";
    for(int i=0;i<n;i++)
        s[i].put_data();

    student s1("stud_name", "SE", 'B', "PCCOE,Pune", "17-09-1998", "B+", "888", 9673);
    s1.put_data();

    student s2(s1);
    s2.put_data();

    cout << "\n\nTotal no. of students in database  :  " << student::get_no() << endl;

    delete [] s;

    return 0;
}
