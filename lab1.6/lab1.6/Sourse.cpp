#include "Complex.h"


using namespace std;

int main()
{
	Complex::Pair t, h1, h2;
	Complex p, r;

	p.Read(h1, h2);
	t.Display(h1, h2);
	r.Display(h1, h2);
	return 0;
}
