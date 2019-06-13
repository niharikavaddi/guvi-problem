 #include<iostream>
 using namespace std;
 int main()
 {
 	unsigned int i;
 	int result=1,num,power;
 	cin>>num>>power;
 	for(i=0;i<power;i++)
 	{
 	result=result*num;	
	}
	cout<<result;
 	return 0;
 }
