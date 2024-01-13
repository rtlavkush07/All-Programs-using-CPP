#include<iostream>
using namespace std;
int main()
{
	int first,second,sum=0;
	cout<<"Enter any two numbers : ";
	cin>>first>>second;
	if(first>second || first==second)
	{
		for(int i=second;i<=first;i++)
		{
			if(i%2==0)
			sum=sum+i;
		}
	}
	else if(second>first)
	{
		for(int i=first;i<=second;i++)
		{
			if(i%2==0)
			sum=sum+i;
		}
	}
	cout<<" Sum = "<<sum;
	
	return 0;
	}
