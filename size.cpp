#include<iostream>
using namespace std;
int main()
{
	int num,q,r,size=0;
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		size++;
	}
	cout<<size;
}
