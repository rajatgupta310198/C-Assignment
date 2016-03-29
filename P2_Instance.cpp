/*
Modify the above problem to explain the characteristics of an instance variable of class Employee.
*/
#include <iostream>
#include <stdio.h>
using namespace std;
class Employee{
     char name[20],desig[20],email[20];
     int age;
     float salary;
 public:
 	void input()
 	{
 		cout<<"\nEnter Name:";
        gets(name);
        cout<"\nEnter Designation :";
        gets(desig);
        cout<<"\nEnter Email Id :";
        gets(email);
        cout<<"\nEnter Age :";
        cin>>age;
        cout<<"\nEnter Salary :";
        cin>>salary;
 	}
 	void output()
 	{
 		cout<<"\nName:";
 		puts(name);
        cout<"\nDesignation :";puts(desig);
        cout<<"\nEmail Id :";puts(email);
        cout<<"\nAge :"<<age;
        cout<<"\nSalary :"<<salary;
 	}
};
int main()
{
	Employee E,E2;   
    cout<<"\nEnter details for object E\n";
	E.input();
    cout<<"\nEnter details for object E2\n";
	E2.input();
    cout<<"\nShowing details of object E\n";
	E.output();
    cout<<"\nShowing details of object E2\n";
    E2.output();
	return 0;
}

/* From the output it is clear that the data members in Class Employee are instance variable as they all have sepearte copy for different objects
of a class */
