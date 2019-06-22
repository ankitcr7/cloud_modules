#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,n;
	//cin>>n;
	char c[90];
	cin>>c;
	n=strlen(c);
	int count=0;
	for(i=0;i<n;i++)
	{
		if(c[i]>='0' && c[i]<='9')
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
