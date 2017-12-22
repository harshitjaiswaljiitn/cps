/*
Question Link : 

https://www.codechef.com/problems/TLG

*/
#include<iostream>
using namespace std;
int main()
{
	int t,a,b,fl2;
	int aa=0,bb=0,flag=0,lead=0,fl=0;
	cin>>t;
	while(t!=0)
	{
		cin>>a>>b;
		aa=aa+a;
		bb=bb+b;
		if(aa>bb)
		{
			flag=1;
			lead=aa-bb;
		}
		else
		{
			flag=2;
			lead=bb-aa;
		}
		if(lead>fl)
		{
			fl=lead;
			fl2=flag;
		}
		
		//cout<<aa<<" "<<bb<<" "<<flag<<" "<<lead<<"\n";
		t--;
	}
	cout<<fl2<<" "<<fl;
	return 0;
}

