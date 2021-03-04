
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
		student(int r,string n)
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
	int r;
	string n;
	float m;
	char g;
	cin>>r>>n>>m>>g;
	student s;
	s.display();
}



