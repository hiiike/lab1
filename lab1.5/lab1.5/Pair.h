#pragma once
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class Pair
{
private:
	double first;
	double second;

public:
	double GetA() const { return first; }
	double GetB() const { return second; }
	void SetFirst(int D) {};
	void SetSecond(int V) {};

	void Init(int D, int V);
	void Display(Pair& k1, Pair& k2);
	void Read(Pair& k1, Pair& k2);

	string ToString(int value) const;


	int Suma_1(int a, int b);
	int Suma_2(Pair& k2);
	int Multiply_1(Pair& k1, Pair& k2);
	int Multiply_2(Pair& k1, Pair& k2);

};

