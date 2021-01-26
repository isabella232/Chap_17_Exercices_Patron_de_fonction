#include <iostream>

using namespace std;

template <class T> T carre(T a) {
	return a * a;
}

template <class T> T somme(T* tab, int nelem) {
	T som;
	int n_i;
	som = 0;
	
	for (n_i = 0; n_i < nelem; n_i++)
		som = som + tab[n_i];
	
	return som;

}

int main() {
	//Patron de fonction
	//Exercice 1
	int n_n = 5;
	float flt_x = 1.5;
	cout << "carre de " << n_n << " = " << carre(n_n) << endl;
	cout << "carre de " << flt_x << " = " << carre(flt_x) << endl;

	//Exercice 2
	int n_ti[] = { 3,5,2,1 };
	float flt_tf[] = { 2.5,3.2,1.8 };
	char c_tc[] = { 'a','e','i','o','u' };
	cout << somme(n_ti, 4) << endl;
	cout << somme(flt_tf, 3) << endl;
	cout << somme(c_tc, 5) << endl;



}