#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,rem;
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rem+(rev*10);
		num/=10;
	}
	cout<<rev;
	return 0;
}
