 #include<iostream>
 using namespace std;
 int main()
 {
 	unsigned int limit1,limit2,i,j,count;
 	cin>>limit1>>limit2;
 	for(i=limit1+1;i<limit2;i++)
 	{ count=0;
 		for(j=1;j<=i;j++)
 		{
 		if(i%j==0)
 		  	count++;
	    }
	    if(count==2)
	        cout<<i<<" ";
	}
 	return 0;
 }
