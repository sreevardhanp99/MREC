#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		string name;
		int rollno;
		string dept;
	public:
		void getStudent()
		{
			cout << "\nEnter name : ";
			cin  >> name;
			cout <<"\nEnter rollno : ";
			cin  >> rollno;
			cout << "\nEnter dept : ";
			cin >> dept;			
		}
		void display()
		{
			cout << "Name = " << name <<" rollno = "<< rollno << " dept = "<<dept;
		}
};
int main()
{
	Student s[3];
	for(int i=0;i<3;i++)
	{
		s[i].getStudent();
		s[i].display();
	}
}
