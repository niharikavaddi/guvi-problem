#include<iostream>
#include<string>
using namespace std;
int main()
{
    unsigned short f=0;
	int total=0,i;
	string roman;
	cin>>roman;
	for(i=(roman.length()-1);i>=0;i--)
	{
		switch(roman[i])
		{
			case 'I':
				if(f==1||f==2||f==3||f==4||f==5||f==6)
				total-=1;
				else
				total+=1;
				break;
			case 'V':
				if(f==6||f==5||f==4||f==3||f==2)
				total-=5;
				else
				{
				total+=5;
				f=1;
				}
				break;
			case 'X':
				if(f==6||f==5||f==4||f==3)
				total-=10;
				else
				{
				total+=10;
				f=2;
				}
				break;
			case 'L':
			    if(f==6||f==5||f==4)
				  total-=50;
				else
				{
				total+=50;
				f=3;
				}	
				break;
			case 'C':
			    if(f==6||f==5)
			  	total-=100;
				else
				{
				total+=100;
				f=4;
				}
				break;
			case 'D':
				if(f==6)
				total-=500;
				else
				{
				total+=500;
				f=5;
			    }
				break;
			case 'M':
				f=6;
				total+=1000;
				break;
			default:
				cout<<"ERROR";
				break;
		}
	}
	cout<<total;
	return 0;
}
