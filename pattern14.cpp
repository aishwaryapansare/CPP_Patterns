#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter no of rows";
	cin>>n;
	
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}