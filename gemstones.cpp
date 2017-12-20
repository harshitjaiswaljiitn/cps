/*
Question link :

https://www.hackerrank.com/challenges/gem-stones/problem

*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int n,c;
	int c1=0;
	cin>>n;
	int x=n-1;
	string s[n];
	
	for(int i=0;i<n;i++)
		cin>>s[i];
	
	char *str=const_cast<char *>(s[0].c_str());;
	char result[100]={0};
	int len,i,j,count,k=0;
    for(i=0;i<*str!='\0';i++){
        count=0;
        for(j=0;j<i;j++){
            if(str[i]==result[j]){  
                count++;
            }
        }
        if(count==0){
            result[k++]=str[i];
        }
    }
		
		
		
	char *sp=result;

	while(*sp!='\0')
	{
		c=0;
		for(int i=1;i<n;i++)
		{
			char *tp=const_cast<char *>(s[i].c_str());
			
				while(*tp!='\0')
				{
					if(*sp==*tp)
					{		
						c++;
						break;
					}
					tp++;
				}
				
		//		cout<<"\n c : "<<c<<"\n";
		
		}
		c1=c1+c/x;
		//cout<<"\n c1 : "<<c1;
		sp++;
	}
	cout<<c1;
	return 0;
}
