/*
WAP to demonstrate the use of constructor and destructor with respect to class Employee.
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
        }
    void Show()
     {
        cout<<"\nName:";
        puts(name);
        cout<"\nDesignation :";puts(desig);
        cout<<"\nEmail Id :";puts(email);
        cout<<"\nAge :"<<age;
        cout<<"\nSalary :"<<salary;
     }
     ~Employee()
     {
        cout<<"\nDestructor is executing and giving back memory to OS\n";
     }
};
int main()
{
	 Employee *E = new Employee();      // allocating memory  at runtime
     E->Show();
     delete E;
	return 0;
}
