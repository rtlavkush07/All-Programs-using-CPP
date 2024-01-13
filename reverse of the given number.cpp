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
		rev=rev*10+rem;
		n=n/10;
	}
	cout <<" Reverse of the number "<<temp<<" is "<<rev;
	return 0;
	}
