#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	char word[20];
	int count=0,i,n;
	cout<<"enter fixed value of string: ";
	cin>>n;
	cout<<"enter string: "<<endl;
	for(i=0;i<n;i++)
		cin>>word[i];
	i=0;
	while(i<=n)
	{
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
		{
			count=count+1;
		}
		i++;
	}
	cout<<count;
	return 0;
}
