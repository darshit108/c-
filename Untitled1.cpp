#include<iostream>
using namespace std;
int main()
{
	int math,phy,boops,SWPD,a;
	float sum;
	cout<<"enter number :";
	cin>>math;
	cout<<"enter number :";
	cin>>phy;
	cout<<"enter number :";
	cin>>boops;
	cout<<"enter number :";
	cin>>SWPD;
	
	a = math+phy+boops+SWPD;
	
	cout<<a <<endl;
	
	sum = a*100/400;
	cout<<sum <<endl;
	
	
	return 0;
}
