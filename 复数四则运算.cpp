#include<iostream>
using namespace std;
class Complex
{
public:
	Complex(double r = 0,double i = 0)
	{
		RP = r;
		IP = i;
	}
	Complex(Complex &other)
	{
		RP = other.RP;
		IP = other.IP;
	}
	friend Complex Complex_add(Complex &C1, Complex &C2);
	friend Complex Complex_sub(Complex &C1, Complex &C2);
	friend Complex Complex_mul(Complex &C1, Complex &C2);
	friend Complex Complex_div(Complex &C1, Complex &C2);
	~Complex() { };
	void disp()
	{
		cout << RP << "+" << IP << "i" << endl;
	}
private:
	double RP;
	double IP;
};
Complex Complex_add(Complex &C1,Complex &C2)
{
	Complex CC;
	CC.RP = C1.RP + C2.RP;
	CC.IP = C1.IP + C2.IP;
	return CC;
}
Complex Complex_sub(Complex &C1, Complex &C2)
{
	Complex CC;
	CC.RP = C1.RP - C2.RP;
	CC.IP = C1.IP - C2.IP;
	return CC;
}
Complex Complex_mul(Complex &C1, Complex &C2)
{
	Complex CC;
	CC.IP = C1.RP * C2.IP + C1.IP * C2.RP;
	CC.RP = C1.RP * C1.IP - C2.RP * C2.IP;
	return CC;
}
Complex Complex_div(Complex &C1, Complex &C2)
{
	Complex CC;
	CC.RP = (C1.RP * C2.RP + C1.IP * C2.IP) / (C1.IP * C1.IP + C2.IP * C2.IP);
	CC.IP = (C1.IP * C2.RP - C1.RP * C2.IP) / (C1.IP * C1.IP + C2.IP * C2.IP);
	return CC;
}

int main()
{
	Complex a(1,2);
	Complex b(2,3);
	Complex c;
	c = Complex_add(a,b);
	c.disp();
	c = Complex_sub(a,b);
	c.disp();
	c = Complex_mul(a,b);
	c.disp();
	c = Complex_div(a,b);
	c.disp();
	Complex d(a);
	d.disp();
	return 0;
}