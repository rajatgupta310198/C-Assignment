/*
WAP to demonstrate Compile memory allocation for an object for Employee class.
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
	Employee E;    // compile time memory allocation
	 cout<<"At compile time memory allocated to object E is  = "<<sizeof(E);
	return 0;
}
