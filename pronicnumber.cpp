#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[10],res[10];
	int i,j,n,mul;
	cout<<"enter fixed value of string: "<<endl;
	cin>>n;
	cout<<"enter random numbers of a string: "<<endl;
	for(i=0;i<n;i++)
		cin>>a;
	cout<<a;
	for(i=0;i<n;i++)
	{
		mul=a[i]*a[i+1];
		res[i]=char(mul);
	}
	for(j=0;j<n;j++)
	{
		if(res[j]==a[j]&&res[j+1]==a[j+1])	
			cout<<res<<endl;
	}
	return 0;
}
