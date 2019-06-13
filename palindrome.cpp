 #include<iostream>
 using namespace std;
 int main()
 {
 	int i,rev=0,num,copy,rem=0;
 	cin>>num;
 	copy=num;
 	while(num!=0)
 	{
 		rem=num%10;
 		rev=rem+(rev*10);
 		num=num/10;
	}
	if(copy==rev)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
 	return 0;
 }
