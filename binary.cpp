#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int n,max=0,count=0;
	cout<<"enter n value:"<<endl;
	cin>>n;
	cout<<"enter array elements"<<endl;
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			count+=1;
		}
		if(count>max)
		{
			max=count;
    		}
		if(a[i]==0)
		{
			count=0;
		}
	}
	cout<<max<<endl;
	return 0;
}
