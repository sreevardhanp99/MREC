#include<iostream>
using namespace std;
class complex
{
	private:
		int r;
		int i;
	public:
		complex(int real,int imag)
		{
			r=real;
			i=imag;
		}

		void getComplex()
		{
			cout << "Enter real part : ";
			cin >> r;
			cout <<"Enter imag part : ";
			cin >> i;
		}
		void display()
		{
			cout << r <<"+"<<i<<"i";
		}
};
int main()
{
//	complex c1=new complex();	
//	c1.getComplex();
//	c1.display();
	
	complex c2(1,3);
	c2.getComplex();
	c2.display();
	
//	complex c3(c1);
//	c3.getComplex();
//	c3.display();
	return 0;
}
