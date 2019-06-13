#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
		cout<<"Alphabet";
	}
	else
    {
    	cout<<"No";
	}
	return 0;
}
