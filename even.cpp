 #include<iostream>
 using namespace std;
 int main()
 {
 	unsigned int limit1,limit2,i;
 	cin>>limit1>>limit2;
 	for(i=limit1+1;i<limit2;i++)
 	{
 		if(i%2==0)
 		{
 		cout<<i<<" ";	
		}
	}

 	return 0;
 }
