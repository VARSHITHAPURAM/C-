#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	string ename;
	float salary;
	int eid;
	public:
		void read()
		{
			cout<<"enter the details of the employee: ";
			cin>>ename;
			cin>>salary;
			cin>>eid;
		}
		void display()
		{
			cout<<"Employee name: "<<ename<<endl;
			cout<<"Salary: "<<salary<<endl;
			cout<<"Employee ID: "<<eid<<endl;
		}
};
int main()
{
	employee e1;
	e1.read();
	e1.display();
	return 0;
}
