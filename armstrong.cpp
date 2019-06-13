 #include<iostream>
 using namespace std;
 int main()
 {
 	unsigned short i,count=0,arm=0,pro=1,rem;
 	unsigned int num,copy;
 	cin>>num;
 	copy=num;
 	while(num!=0)
 	{
 	num=num/10;
	count++;	
	}
	num=copy;
	while(num!=0)
 	{
 	rem=num%10;
 	for(i=0;i<count;i++)
	 	pro=pro*rem;	
	 arm=arm+pro;
	 pro=1;
	 num=num/10;
	}
	if(arm==copy)
		cout<<"yes";
	else
		cout<<"no";
	return 0;
 }
