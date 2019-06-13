#include<iostream>
using namespace std;
int main()
{
	int i=0,j;
	char name[20];
	cin>>name;
	while(name[i]!='\0')
		i++;
	for(j=i-1;j>=0;j--)
		cout<<name[j];
}
