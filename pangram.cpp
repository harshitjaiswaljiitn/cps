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
	int c=0;
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
			c++;
	}
	if(c==0)
		cout<<"pangram";
	else
		cout<<"not pangram";
	return 0;
}
