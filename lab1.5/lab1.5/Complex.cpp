#include "Complex.h"
#include "Pair.h"

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
