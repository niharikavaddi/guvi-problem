 #include<iostream>
 using namespace std;
 int main()
 {
 	unsigned short i,count,arm,pro=1,rem,limit1,limit2;
 	unsigned int num,copy;
    cin>>limit1>>limit2;
    for(num=limit1+1;num<limit2;num++)
  {
    count=0;
    arm=0;
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
	{
	 	pro=pro*rem;
	}	
	 arm=arm+pro;
	 pro=1;
	 num=num/10;
	}
	if(arm==copy)
		cout<<copy<<" ";
    num=copy;
 }
	return 0;
 }
