#include <iostream>
using namespace std;
class MyAddition{
    int a,b;
    MyAddition()
    {
    	 cout<<"\nAddition is "<<a+b;
    }
   public:
   MyAddition(int aa,int bb)
   	{   a=aa;
   		b=bb;
   		
        MyAddition();
   	}

};
int main()
{
    MyAddition add(8,9);
    return 0;
}
