#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Customer{
     char name[20],email[20];
     int age;
     double balance;
 public:
   void	INIT()
     {
         strcpy(name,"Pratyush");
         strcpy(email,"pratush@gmail.com");
         age=23;
         balance  =50000;
    }
    void Withdrawal()
    {
        if(balance!=0)
        {
            int wa;
            cout<<"\nEnter amount :";
            cin>>wa;
            if(wa<balance)
            balance = balance-wa;
            else
                cout<<"\nInsufficient  balance";
        }
    }
};
int main()
{
	 Customer C;
	 C.INIT().Withdrawal();
	return 0;
}
