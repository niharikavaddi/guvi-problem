#include<iostream>
using namespace std;
int main()
{
	unsigned short i,N,K;
	cin>>N>>K;
	int array[N],sum=0;
	for(i=0;i<N;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<K;i++)
	{
		sum=sum+array[i];
	}
	cout<<sum;
}
