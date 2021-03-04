#include <iostream>

using namespace std;

struct employee{
	int code;
	float salary;
	char grade;
};

int main()
{
	employee p[2];
	cout<<"Enter Employee Info: "<<endl;
	cout<<"Enter Code Number: ";
	cin>>p[0].code;
	cout<<"Enter Salary: ";
	cin>>p[0].salary;
	cout<<"Enter Grade: ";
	cin>>p[0].grade;
	
	cout<<"Enter Employee Info: "<<endl;
	cout<<"Enter Code Number: ";
	cin>>p[1].code;
	cout<<"Enter Salary: ";
	cin>>p[1].salary;
	cout<<"Enter Grade: ";
	cin>>p[1].grade;
	cout<<endl<<endl;
	
	if(p[0].salary>p[1].salary){
		cout<<"Employee With Greater Salary is";
		cout<<"Code Is: "<<p[0].code<<endl;
		cout<<"Salary Is: "<<p[0].salary<<endl;
		cout<<"Grade Is: "<<p[0].grade<<endl;
		
	}else if(p[1].salary>p[0].salary)
	{
		cout<<"Employee With Greater Salary is";
		cout<<"Code Is: "<<p[1].code<<endl;
		cout<<"Salary Is: "<<p[1].salary<<endl;
		cout<<"Grade Is: "<<p[1].grade<<endl;
	}else cout<<"Invalid Operation";
}
