#include "Pair.h"
#include <iostream>

using namespace std;


void Pair::Init(int D, int V)
{
	SetFirst(D);
	SetSecond(V);
}

void Pair::Read(Pair& k1, Pair& k2)
{
	cout << " a = ? "; cin >> k1.first;
	cout << " b = ? "; cin >> k2.first;
	Init(k1.first, k2.first);

	cout << " c = ? "; cin >> k1.second;
	cout << " d = ? "; cin >> k2.second;
	Init(k1.second, k2.second);
}


void Pair::Display(Pair& k1, Pair& k2)
{
	cout << " a = " << k1.first << endl;
	cout << " b = " << k2.first << endl;
	cout << " c = " << k1.second << endl;
	cout << " d = " << k2.second << endl;

	cout << " (a,b) + (c,d) = (a + c , b + d) " << endl;

	cout << " (" << k1.first << "," << k2.first << ") + (" << k1.second << "," << k2.second << ") = ";
	cout << "(" << k1.first << " + " << k1.second << " , " << k2.first << " + " << k2.second << ")" << endl << endl;
	cout << "( " << ToString(Suma_1(k1.first, k1.second)) << " , " << ToString(Suma_2(k2)) << " )" << endl;

	cout << " (a,b) * (c,d) = (a * c , b * d) " << endl;

	cout << " (" << k1.first << "," << k2.first << ") * (" << k1.second << "," << k2.second << ") = ";
	cout << "(" << k1.first << " * " << k1.second << " , " << k2.first << " * " << k2.second << ")" << endl;
	cout << "( " << ToString(Multiply_1(k1, k2)) << " , " << ToString(Multiply_2(k1, k2)) << " )" << endl << endl;
}

int Pair::Suma_1(int a, int b) { return a + b; }

int Pair::Suma_2(Pair& p2) { return p2.first + p2.second; }

int Pair::Multiply_1(Pair& k1, Pair& k2) { return k1.GetA() * k1.GetB(); }

int Pair::Multiply_2(Pair& k1, Pair& k2) { return k2.GetA() * k2.GetB(); }

string Pair::ToString(int value) const
{
	stringstream sstr;
	sstr << value;
	return sstr.str();
}
