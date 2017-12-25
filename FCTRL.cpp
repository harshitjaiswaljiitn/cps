#include<iostream>
using namespace std;
int main()
{
	long int a;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
{
	int z=0;
	cin>>a;
	while(a!=0)
	{
		z=z+a/5;
		a=a/5;
	}
	cout<<z<<"\n";
}
} 
