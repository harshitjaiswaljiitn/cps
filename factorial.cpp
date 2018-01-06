/* to find that the given number is factorial of which number 
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	while(n!=1)
	{
		i++;
		n=n/i;
	}
	cout<<i;
	return 0;
}
