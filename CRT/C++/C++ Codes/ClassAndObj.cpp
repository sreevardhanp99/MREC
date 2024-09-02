#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length,breadth;
	public:
		void getrectangle()
		{
			cout << "Enter the length and breadth : ";
			cin >> length >> breadth;
		}
		void display()
		{
			cout<<"\n length = "<<length;
			cout<<"\n breath = "<<breadth;
		}
};
int main()
{
	rectangle r; // r is object -- memory allocated 
	r.getrectangle();
	r.display();
	cout<<"\nlength = "<<r.length;
	return 0;
}
