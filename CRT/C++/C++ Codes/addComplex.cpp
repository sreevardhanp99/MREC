#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
	public:
		void getComplex()
		{
			cout << "\nEnter real part : ";
			cin >> real;
			cout <<"\nEnter imag part : ";
			cin >> img;			
			
		}
		void display()
		{
			cout << "\nComplex number = " <<real<<"+i"<<img;
		}
		void addComplex(complex c1,complex c2)
		{
			complex c3;
			c3.real=c1.real+c2.real;
			c3.img=c1.img+c2.img;
			cout<<"\nresultant complex = "<<c3.real<<"+i"<<c3.img;
		}
};
int main()
{	complex c1,c2;

	c1.getComplex();
	c1.display();
	c2.getComplex();
	c2.display();
	c1.addComplex(c1,c2);
	return 0;
}
