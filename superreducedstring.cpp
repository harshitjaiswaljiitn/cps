#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c=0;
	string s;
	cin>>s;
//	s.erase(0,1);
	char *sp=const_cast<char *>(s.c_str());
	//int len=strlen(sp);
	//cout<<len;
	while(*sp!='\0')
	{
		if(*sp==*(sp+1))
		{
			s.erase(c,c+2);
			
		}
			
		c++;
		sp++;
	//	cout<<c<<"\n";
	}
	
	if(*sp=='\0')
		cout<<"Empty String.";
	else
		cout<<s;
	return 0;
}
