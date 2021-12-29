#include<iostream>
using namespace std;
int main()
{
	int a[10],sqrt[10];
	int n,temp;
	cout<<"enter n value:"<<endl;
	cin>>n;
	cout<<"enter array elements"<<endl;
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
	}
	for(int i=0;i<n;i++)
	{
		sqrt[i]=a[i]*a[i];
		cout<<sqrt[i]<<endl;
	}
	for(int k=0;k<n;k++)
	{
		if(sqrt[k]>sqrt[k+1])
		{
			temp=sqrt[k];
			sqrt[k]=sqrt[k+1];
			sqrt[k+1]=temp;
		}
		else
		 continue;
	}
	for(int i=0;i<n;i++)
	{
		cout<<sqrt[i]<<endl;
	}
	return 0;
}
