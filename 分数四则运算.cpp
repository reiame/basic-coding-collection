#include<iostream>
using namespace std;
int iteration(int a, int b)
{
	while (a % b != 0)
	{
		int temp;
		temp = a % b;
		a = b;
		b = temp;
	}
	return b;
}
class Rational
{
public:
	Rational(int nn=1,int mm=1) 
	{ 
		n = nn;
		m = mm;
	};
	Rational R_add(Rational &A);
	Rational R_sub(Rational &A);
	Rational R_mul(Rational &A);
	Rational R_div(Rational &A);
	void R_print();
private:
	void simple();
	void check();
	int m;
	int n;
};
void Rational::check()
{
	if (m < 0)
	{
		n = -n;
		m = -m;
	}
	if (m == 0)
	{
		cout << "The denominator can't be 0" << endl;
	}
}
void Rational::simple()
{
	if(iteration(m, n) != 1)
	{
		int tmp;
		tmp = m;
		m = m / iteration(m, n);
		n = n / iteration(tmp, n);
	}
	check();
}
void Rational::R_print()
{
	cout << n << "/" << m << endl;
}
Rational Rational::R_add(Rational &A)
{
	Rational R;
	R.m = m * A.m;
	R.n = m * A.n + n * A.m;
	R.simple();
	return R;
}
Rational Rational::R_sub(Rational &A)
{
	Rational R;
	R.m = m * A.m;
	R.n = n * A.m - m * A.n;
	R.simple();
	return R;
}
Rational Rational::R_mul(Rational &A)
{
	Rational R;
	R.m = m * A.m;
	R.n = n * A.n;
	R.simple();
	return R;
}
Rational Rational::R_div(Rational &A)
{
	Rational R;
	R.m = m * A.n;
	R.n = n * A.m;
	R.simple();
	return R;
}
int main()
{
	int a, b, c, d;
	cout << "Input the first Rational, numerator then denominator." << endl;
	cin >> a >> b;
	cout << "Input the second Rational, numerator then denominator." << endl;
	cin >> c >> d;
	Rational R1(a,b),R2(c,d);
	Rational RR;
	RR = R1.R_add(R2);
	RR.R_print();
	RR = R1.R_sub(R2);
	RR.R_print();
	RR = R2.R_sub(R1);
	RR.R_print();
	RR = R1.R_mul(R2);
	RR.R_print();
	RR = R1.R_div(R2);
	RR.R_print();
	return 0;
}