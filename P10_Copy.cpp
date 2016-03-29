/*
WAP to initialize the data member of Employee class 
through parameterized constructor and print the details 
using function while instantiating the class at runtime.
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
 	 Employee(char n[],char d[],char e[],int ag,double sal)     // parameterized construcutor
     {
         strcpy(name,n);
         strcpy(desig,d);
         strcpy(email,e);
         age=ag;
         salary=sal;
        }
        Employee(Employee *e)
        {  strcpy(name,e->name);
           strcpy(desig,e->desig);
           strcpy(email,e->email);
           age = e->age;
           salary = e->salary;

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
    
};
int main()
{
	 Employee *E = new Employee("Mahima","Neuro","mahimakumar@gmail.com",18,7500000);      // allocating memory  at runtime
     cout<<"\nBy object E in which parameterized construcutor is used";
     E->Show();
     Employee *A  =  new Employee(E);
     cout<<"\nBy object A in which copy construcutor is used";
     A->Show();
     delete A;
     delete E;
	return 0;
}
