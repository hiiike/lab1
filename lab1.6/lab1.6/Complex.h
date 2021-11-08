#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Complex
{
public:
	class  Pair
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
	Pair pair;
public:
	Pair GetPair() { return pair; }
	void SetPair(Pair pair) {};

	void Init(int D, int V);

	void Read(Pair& k1, Pair& k2);
	void Display(Pair& k1, Pair& k2);
	int Suma_1(int a, int b);
	int Suma_2(Pair& k2);
	void Init(Pair pair);

	int Diff_1(Pair& k1);
	int Diff_2(Pair& k2);

	int Multiply_1(Pair& k1, Pair& k2);
	int Multiply_2(Pair& k1, Pair& k2);
};
