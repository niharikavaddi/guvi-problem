#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"Vowel";
	}
	else
	{
		cout<<"Consonent";
	}
    }
    else
    {
    	cout<<"invalid";
	}
	return 0;
}
