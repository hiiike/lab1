#include "Complex.h"

using namespace std;

void Complex::Init(Pair pair) { SetPair(pair); }

void Complex::Display(Pair& k1, Pair& k2)
{
	cout << " (a,b) * (c,d) = (a c * b d , a d + b c)" << "= ";
	cout << "( " << pair.ToString(Multiply_1(k1, k2)) << " , " << pair.ToString(Multiply_2(k1, k2)) << " )" << endl;

	cout << " (a,b) - (c,d) = (a - c, b - d)" << "=";
	cout << "( " << Diff_1(k1) << " , " << Diff_2(k2) << " )" << endl;
}



void Complex::Read(Pair& k1, Pair& k2)
{
	Pair l;
	l.Read(k1, k2);
	Init(l);
}

int Complex::Diff_1(Pair& k1) { return k1.GetA() - k1.GetB(); }

int Complex::Diff_2(Pair& k2) { return k2.GetA() - k2.GetB(); }

int Complex::Multiply_1(Pair& k1, Pair& k2) { return k1.GetA() + k1.GetB() * k2.GetA() + k2.GetB(); }

int Complex::Multiply_2(Pair& k1, Pair& k2) { return k1.GetA() + k2.GetB() + k2.GetA() + k1.GetB(); }




void Complex::Pair::Init(int D, int V)
{
	SetFirst(D);
	SetSecond(V);
}

void Complex::Pair::Read(Pair& k1, Pair& k2)
{
	cout << " a = ? "; cin >> k1.first;
	cout << " b = ? "; cin >> k2.first;
	Init(k1.first, k2.first);

	cout << " c = ? "; cin >> k1.second;
	cout << " d = ? "; cin >> k2.second;
	Init(k1.second, k2.second);
}


void Complex::Pair::Display(Pair& k1, Pair& k2)
{
	cout << endl;
	cout << " a = " << k1.first << endl;
	cout << " b = " << k2.first << endl;
	cout << " c = " << k1.second << endl;
	cout << " d = " << k2.second << endl << endl;

	cout << endl << " (a,b) + (c,d) = (a + c , b + d) " << endl;

	cout << " (" << k1.first << "," << k2.first << ") + (" << k1.second << "," << k2.second << ") = ";
	cout << "(" << k1.first << " + " << k1.second << " , " << k2.first << " + " << k2.second << ")" << endl << endl;
	cout << "( " << ToString(Suma_1(k1.first, k1.second)) << " , " << ToString(Suma_2(k2)) << " )" << endl;

	cout << endl << " (a,b) * (c,d) = (a * c , b * d) " << endl;

	cout << " (" << k1.first << "," << k2.first << ") * (" << k1.second << "," << k2.second << ") = ";
	cout << "(" << k1.first << " * " << k1.second << " , " << k2.first << " * " << k2.second << ")" << endl << endl;
	cout << "( " << ToString(Multiply_1(k1, k2)) << " , " << ToString(Multiply_2(k1, k2)) << " )" << endl << endl;
}

int Complex::Pair::Suma_1(int a, int b) { return a + b; }

int Complex::Pair::Suma_2(Pair& k2) { return k2.first + k2.second; }

int Complex::Pair::Multiply_1(Pair& k1, Pair& k2) { return k1.GetA() * k1.GetB(); }

int Complex::Pair::Multiply_2(Pair& k1, Pair& k2) { return k2.GetA() * k2.GetB(); }

string Complex::Pair::ToString(int value) const
{
	stringstream sstr;
	sstr << value;
	return sstr.str();
}
