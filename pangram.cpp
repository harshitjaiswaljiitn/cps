/*
Question Link : 

https://www.hackerrank.com/challenges/pangrams/problem

*/
#include<stdlib.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[1000];
	int a[200];
	int flag=0;
	for(int i=97;i<123;i++)
		a[i]=0;
		
	scanf("%[^\n]s",&s);
	int len=strlen(s);
	//cout<<len;
	for(int i=0;i<len;i++)
	{
		int k=(char)tolower(s[i]);
		a[k]++;
	}
	
	for(int i=97;i<123;i++)
	{
		if(a[i]==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"not pangram";
	else
		cout<<"pangram";
	return 0;
}
