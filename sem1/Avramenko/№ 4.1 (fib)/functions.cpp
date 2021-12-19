#include "Header.h"
long double m;
long double a = 0;
long double b = 1;
long double i;
long double d;


// рекурсия
long double recursion(long double u) 
{
	if (u == 0) {
		return 0;
	}
	if (u == 1) {
		return 1;
	}


	
	return recursion(u - 1) + recursion(u - 2);
	
}

// формула бине
long double bine(long double c) {      
	m = (pow(((1 + sqrt(5)) / 2), c) - pow(((1 - sqrt(5)) / 2), c)) / sqrt(5);

	return m;
}


// цикл
long double cycle(long double c) {
	for (i = 2; i < c + 1; i++) {
		
		d = b;
		b = a + b;
		a = d;
		

	}
	if (c == 0) {
		return 0;
		
	}
	if (c == 1) {
		return 1;
		
	}
	else {
		return b;

	}
}
