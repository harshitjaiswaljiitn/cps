/*
Question link : 

https://www.codechef.com/problems/AMR15A

*/

#include<iostream>
using namespace std;
 
int main()
{
 
 
int e=0;
int o=0;
int x;
cin>>x;
int a[x];
for(int i=0;i<x;i++)
cin>>a[i];
for(int i=0;i<x;i++)
{
if(a[i]%2==0)
e++;
else
o++;
}
 
if(e>o)
cout<<"READY FOR BATTLE";
else
cout<<"NOT READY";
return 0;
}
 
 
