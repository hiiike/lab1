#include <iostream>
#include "Complex.h"
#include "Pair.h"

using namespace std;

int main()
{
	Pair h1, h2;
	Complex p;
	Pair r;

	p.Read(h1, h2);
	r.Display(h1, h2);
	p.Display(h1, h2);

	return 0;
}
