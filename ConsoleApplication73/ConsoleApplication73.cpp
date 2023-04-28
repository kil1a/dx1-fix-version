#include <iostream>
#include "drob.h"
using namespace std;

int main()
{
	srand(time(nullptr));
	setlocale(LC_ALL, "RUS");

	drob a;
	int c{}, b{};
	a.data_entry(c, b);
	a.plus(c, b);
	a.minus(c, b);
	a.multiply(c, b);
	a.division(c, b);











	return 0;
}