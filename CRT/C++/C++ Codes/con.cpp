#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		rectangle() // default constructor
		{
			length=0;
			breadth=0;
		}
		rectangle(int r,int b) // parameterized constructor
		{
			length=r;
			breadth=b;
		}
		rectangle(rectangle r1) // copy constructor
		{
			length=r1.length;
			breath=r1.breadth;
		}
		void getRectangle()
		{
			cout<<"Enter length and breadth : ";
			cin>>length>>breadth;	
		}
		void display()
		{
			cout << "length = "<<length;
			cout << " breadth = "<<breadth;
		}
};
int main()
{
	rectangle r1();
	r1.display();
	r1.getRectangle();
	r1.display();
	rectangle r2(100,40); 
	r2.display();
	rectangle r3(r1);
	r3.display();
	
	return 0;
}
