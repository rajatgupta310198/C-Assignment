/*
WAP to demonstrate runtime memory allocation and use of user defined constructor 
to initialize the data members of the class and print the detail.
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Employee{
     char name[20],desig[20],email[20];
     int age;
     double salary;
 public:
 	 Employee()
     {
         strcpy(name,"Pratyush");
         strcpy(desig,"R&D Director");
         strcpy(email,"pratush@gmail.com");
         age=23;
         salary=7500000;
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
	 Employee *E = new Employee();      // allocating memory  at runtime
     cout<<endl<<"Size of object of Employee is = "<<sizeof(E);
     delete E;
	return 0;
}
