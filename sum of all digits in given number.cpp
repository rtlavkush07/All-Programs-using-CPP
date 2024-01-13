#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,r;
	cout<<"Enter any number :";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<"Sum of all digits = "<<sum;
	return 0;
}
