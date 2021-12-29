#include <iostream>
using namespace std;
int main()
{
	int a[5]={12,345,2,6,7896};
	int count=0,d;
	for(int i=0;i<5;i++)
	{
		d=0;
		while(a[i]>0){
			d++;
			a[i]=a[i]/10;
		}
		if(d%2==0)
		count+=1;
	}
	cout<<count<<endl;
	return 0;
}
