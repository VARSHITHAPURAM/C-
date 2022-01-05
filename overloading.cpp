#include<iostream>
using namespace std;
class addition {
	public:
	void addmethod(int a,int b)
	{
		int sum=a+b;
		cout<<"Int sUM = "<<sum<<endl;
	}
	void addmethod(float a,float b)
	{
		float sum=a+b;
		cout<<"Float sum = "<<sum<<endl;
	}
	void addmethod(int a,int b,int c)
	{
		int sum=a+b+c;
		cout<<"Sum of 3 numbers = "<<sum<<endl;
	}
};
int main()
{
	addition add;
	int x,y,z;
	float p,q;
	cout<<"Enter 3 integer numbers: "<<endl;
	cin>>x>>y>>z;
	cout<<"Enter 2 float numbers: "<<endl;
	cin>>p>>q;
	add.addmethod(x,y);
	add.addmethod(p,q);
	add.addmethod(x,y,z);
	return 0;
}
