#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter number of rows";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
