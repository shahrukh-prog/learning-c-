//CLASSES;
//Access modifiers;
//constructor function(special function);
//function overloading (2 functions same name);
//by default memeber variable and funtions are private;


#include <iostream>

using namespace std;

class student{
	public:
	int roll;
	string name;
	float marks;
	char grade;
	//explicit contructor,implicit (when not written);
	public:
		student()
		{
			
		}
    public:
	void display()
	{
		cout<<"hello frands chai pi loo";
	}
};

int main()
{
	student s;
	s.display();
}



