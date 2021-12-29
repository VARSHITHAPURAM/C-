#include<iostream>
#include<string.h>
using namespace std;
class student
{
	string sname;
	int rollno;
	char grade;
	public:
		void read()
		{
			cin>>sname;
			cin>>rollno;
			cin>>grade;
		}
		void display()
		{
			cout<<"Name: "<<sname<<endl;
			cout<<"Roll No: "<<rollno<<endl;
			cout<<"Grade: "<<grade<<endl;
		}
};
int main()
{
	student s[3];
	for(int i=0;i<3;i++)
	{
		cout<<"enter student details:"<<endl;
		s[i].read();
	}
	for(int i=0;i<3;i++)
		s[i].display();
	return 0;
}
