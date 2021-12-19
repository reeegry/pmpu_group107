#include "Header.h"

long double c;

int main(){
	c = 0;
	cin >> c;
	while ((bine(c)) > (1e308) or (c < 0)) {
		cout << "vvedeni nedopustimie znacheniya" << endl; // ограниячене на ввод
		cin >> c;
	}

	cout.precision(16);

	cout << "cycle" << endl  ;
	
	cout << cycle(c) << endl;
	
	cout << "BINE" << endl;

	cout << bine(c) << endl;

	cout << "recursion" << endl;
		
	if (c <= 40) {
		cout << recursion(c);
	}
	else {
		cout << "vvedeno slishkom bolshoe znachenie";
	}
}

		


