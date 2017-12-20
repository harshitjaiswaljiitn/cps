/*

Question Link :

https://www.codechef.com/problems/CHEFSQ

*/

#include<iostream>
using namespace std;
int main()
{
	int t;
	int n,m;
	cin>>t;
	while(t!=0)
	{
		cin>>n;
		int a1[n];
		for(int i=0;i<n;i++)
		{
			cin>>a1[i];
		}
		cin>>m;
		int a2[m];
		for(int i=0;i<m;i++)
		{
			cin>>a2[i];
		}
		int c=0;
		for(int a=0;a<m;a++)
		{
			for(int b=0;b<n;b++)
			{
				if(a2[a]==a1[b])
				{
					c++;
					break;
				}
			}
		}
		cout<<"\n"<<c<<"\n";
		if(c==m)
			cout<<"Yes"<<"\n";
		else
			cout<<"No"<<"\n";
		
		
		
		
		t--;
	}
	return 0;
}
