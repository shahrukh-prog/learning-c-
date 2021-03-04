
#include <iostream>

using namespace std;

class student{
	private:
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
		void setRoll(int r)
		{
			roll=r;
		}
	public getRoll()
	{
		return roll;
	}
	//copy,paste mar bhsdk
			
    public:
	void display()
	{
			cout>>roll>>name>>marks>>grade;
	}
};

int main()
{
	student s;
	s.setRoll() 
	s.display();
}
