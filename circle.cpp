#include<iostream>
#include<string.h>
using namespace std;
#define pi 3.14;
class circle
{
	public:
	float radius;
	void circumference()
	{
		float c;
		c=2*pi*radius;
		cout<<"circumference= "<<c<<endl;
	}
	void area()
	{
		float a;
		a=pi*radius*radius;
		cout<<"area= "<<a<<endl;
	}
};
int main()
{
	circle c1;
	float radius;
	cin>>c1.radius;
	c1.circumference();
	c1.area();
	return 0;
}
