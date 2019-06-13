#include<iostream>
using namespace std;
int main()
{
	unsigned int fac=1,num;
	unsigned short i;
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fac=fac*i;
	}
	cout<<fac;
	return 0;
}
