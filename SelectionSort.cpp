#include <iostream>

using namespace std;

template <class t>
class SelectionSort
{
    t a[10];
    int n;
public:
    void get_data();
    void put_data();
    void sort_data();
};

template <class t>
void SelectionSort <t> :: get_data()
{
    cout << "Enter total no. of elements : ";
    cin >> n;
    cout << "Enter " << n << " numbers : ";
    for(int i=0;i<n;i++)
        cin >> a[i];
}

template <class t>
void SelectionSort <t> :: put_data()
{
    cout << "Sorted data : ";
    for(int i=0;i<n;i++)
        cout << "\t" << a[i];
}

template <class t>
void SelectionSort <t> :: sort_data()
{
    int loc;
    t temp, min;
    for(int i=0;i<n;i++)
    {
        min = a[i];
        loc = i;
        for(int j=i+1;j<n;j++)
        {
            if(min > a[j])
            {
                min = a[j];
                loc = j;
            }
        }
        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

}

int main()
{
    int ch;
    while(1)
    {
        cout << "\n\n1.Integer type \n2.Float type \n3.Exit \nEnter your choice for the required data type : ";
        cin >> ch;

        switch(ch)
        {
            case 1: SelectionSort <int> s1;
                    s1.get_data();
                    s1.sort_data();
                    s1.put_data();
                    break;
            case 2: SelectionSort <float> s2;
                    s2.get_data();
                    s2.sort_data();
                    s2.put_data();
                    break;
            case 3: cout << "\n\nExit program.";
                    return 0;
            default : cout << "\nInvalid choice." ;
        }
    }
}
