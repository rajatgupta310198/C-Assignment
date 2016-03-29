/*
•	WAP demonstrating accessing of private data member salary of employee
 class  with the help of a method which itself is not a member of that class.
*/
#include<iostream>
using namespace std;
 
class Test
{
 
    int data;
public:
     
    int getData() { 
    	return data; 
    }
};
 
int main()
{
    Test t;
    int* ptr = (int*)&t;
    *ptr = 10;
    cout << t.getData();
    return 0;
}