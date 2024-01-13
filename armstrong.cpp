#include<iostream>
using namespace std;
int main()
{
	int n,rev,rem;
	cout<<"Enter any number : ";
	cin>>n;
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev+(rem*rem*rem);
		n=n/10;
	}
	if(temp==rev)
	{
		cout<<"Armstrong";
	}
	else
	{
		cout<<"Not Armstrong";
	}
	return 0;
	}
