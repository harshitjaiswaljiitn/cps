#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int c=0;
	string s;
	cin>>s;
	char *sp=const_cast<char *>(s.c_str());
	int len=strlen(sp);
//	cout<<len<<"\n";
	for(int i=0;i<len;i++)
	{
		int k=(char)tolower(s[i]);
		int l=s[i];
		if(k!=l)
			c++;
		//cout<<k<<" "<<l<<"\n";	
	}
	cout<<c+1;
    return 0;
}
