#include<iostream>
#include<string>
using namespace std;
int main()
{
	unsigned short i;
	char input[30];
    cin>>input;
    for(i=0;input[i]!='\0';i++)
    {
    	if(i%2==0)
    	cout<<input[i+1];
    	if(i%2!=0)
    	cout<<input[i-1];
	}
}
