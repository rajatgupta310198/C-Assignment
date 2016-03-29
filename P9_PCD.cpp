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
     E->Show();
     delete E;
	return 0;
}
