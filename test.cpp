#include <iostream>

using namespace std;

struct elev {
	int varsta;
	int greutate;
};

void print_elev(struct elev a, const char *nume)
{
	cout << nume << " are " << a.varsta << " ani si " << a.greutate << "kg.\nSfarsit.\n";
}

int main(int argc, char *argv[])
{
	// struct elev ruru;
	// ruru.varsta = 18;
	// ruru.greutate = 55;

	// print_elev(ruru, "Ruru");

	// cout << sizeof(struct elev) << "\n";

	// int *p = 0;
	// p = p + 1;
	// cout << p << "\n";

	char v[4];
	v[0] = 1;
	v[1] = 1;
	v[2] = 0;
	v[3] = 0;

	int *p;
	p = (int *) v;
	cout << *p << "\n";

	// cout << v << "\n";
	// cout << &v << "\n";
	// cout << &v[0] << "\n";
	// cout << v[0] << "\n";
	// cout << *v << "\n";
	// cout << v + 1 << "\n";
	// cout << &v[1] << "\n";
	// cout << v[1] << "\n";
	// cout << *(v + 1) << "\n";

	return 0;
}