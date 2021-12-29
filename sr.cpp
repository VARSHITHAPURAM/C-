#include<iostream>
using namespace std;
int num=50;
int main()
{
	int num=100;
	cout<<"local variable: "<<num<<endl;
	cout<<"global variable: "<<::num<<endl;
	return 0;
}
