#include<iostream>
using namespace std;

int digit(int n)
{
	int m=0;
	while(n!=0)
	{
		n=n/10;
		m++;
	}
	return m;
}


void multiply(int a)
{
	int b=a-1;
	int m=digit(a);
	int ar[200];
	int temp=0;
	
	for(int i=0;i<m;i++)
	{
		ar[i]=a%10;
		a=a/10;
	}
	
	
	for(int r=b;r>0;r--)
	{
	
	
	
	for(int i=0;i<m;i++)
	{
		int x=ar[i]*r + temp;
		ar[i]=x%10;
		temp=x/10;
	}
	
	while(temp!=0)
	{
		ar[m]=temp%10;
		temp=temp/10;
		m++;
	}
}
/*
for(int j=m-1;j>=0;j--)
	{
		cout<<ar[j];
	}
*/

int z=0;
for(int i=0;i<m;i++)
	{
		if(ar[i]==0)
			z++;
		else
			break;
	}
	cout<<z;	
}



int main()
{
	int t;
	cin>>t;
	int fac[t];
	for(int y=0;y<t;y++)
	{
		cin>>fac[y];
		multiply(fac[y]);
		cout<<"\n";
	}
	return 0;
}
