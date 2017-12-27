/*
Qustion Link :
https://www.codechef.com/problems/LUCKFOUR

*/

#include<iostream>
using namespace std;
int main()
{
	int x,t,p;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int c=0;
		cin>>x;
		while(x!=0)
		{
			if(x%10==4)
				c++;
			x=x/10;
			
		}
		cout<<c<<"\n";
	}
	return 0;
}
