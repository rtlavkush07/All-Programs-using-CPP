#include<iostream>
using namespace std;
int main()
{
	int n,year,week,days,rem;
	cout<<"Enter the Days : ";
	cin>>n;
	year=n/365;
	n=n%365;
	week=n/7;
	n=n%7;
	days=n;
	cout<<"Year = "<<year<<endl;
	cout<<"Week = "<<week<<endl;
	cout<<"Days = "<<days<<endl;
	
	return 0;
	}
