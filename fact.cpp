#include<iostream>
using namespace std;
int main()
{
	unsigned short i;
	int num,fact=1;
	cin>>num;
	for(i=1;i<=num;i++)
	fact=fact*i;
	cout<<fact;
	return 0;
}
