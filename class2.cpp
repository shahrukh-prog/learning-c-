
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
		void input()
		{
			cin>>roll>>name>>marks>>grade;
		}
    public:
	void display()
	{
			cout>>roll>>name>>marks>>grade;
	}
};

int main()
{
	student s;
	s.input();
	s.display();
}



