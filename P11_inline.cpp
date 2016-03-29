/*
WAP using inline function which accepts one parameter as a number and 
returns the addition of its digit.(eg. 12345=1+2+3+4+5).
*/
#include <iostream>
using namespace std;
inline int SumOfDigits(int n);
{
	int sum = 0;
	while(n>0)
	{
		sum += n%10;
		n/=10;
	}
	return sum;
}
int main()
{
   int Number;
   cout<<"\nEnter Number :";
   cin>>Number;
   cout<<"\nSum of digits is ==> "<<SumOfDigits(Number);
   return 0;
}