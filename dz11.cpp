#include "dz11.h"

Screen::Screen()
{
	dpi = 0;
	diagonal = 0;
}

Screen::Screen(int d, double diag)
{
	dpi = d;
	diagonal = diag;
}

void Screen::print()
{
	cout << "The diagonal is : " << diagonal << " inches\n";
	cout << "dpi: " << dpi << endl; 
}

Screen::~Screen()
{
}

Keyboard::Keyboard()
{
	built_in = 0;
}

Keyboard::Keyboard(bool b)
{
	built_in = b;
}

void Keyboard::print()
{
	if (built_in) {
		cout << "Keyboard was built in\n";
	}
	else cout << "Keyboard wasn't built in\n";
}

Keyboard::~Keyboard()
{
}

Laptop::Laptop()
{
	gaming = 0;
}

Laptop::Laptop(bool b,int d, double diag, bool gm): Keyboard(b),Screen(d, diag)
{
	gaming = gm;
	cout << "Laptop exist!\n";
}

void Laptop::print()
{
	Keyboard::print();
	Screen::print();
	if (gaming) {
		cout << "Gaming laptop\n";
	}
	else cout << "Laptop\n";
}

Laptop::~Laptop()
{
}

PC::PC()
{
	pow = 0;
}

PC::PC(bool b, int d, double diag, bool p):Keyboard(b), Screen(d, diag)
{
	pow = p;
	cout << "PC exist!\n";
}

void PC::print()
{
	Keyboard::print();
	Screen::print();
	if (pow) {
		cout << "Your PC is powerful!\n";
	}
	else cout << "Your PC is not powerful!\n";
	
}

PC::~PC()
{
}

Phone::Phone()
{
	android = 0;
}

Phone::Phone(bool b, int d, double diag, bool andr) :Keyboard(b), Screen(d, diag)
{
	android = andr;
	cout << "Phone exist!\n";
}

void Phone::print()
{
	Keyboard::print();
	Screen::print();
	if (android) {
		cout << "You have an android!\n";
	}
	else cout << "Your phone is not android!\n";
}

Phone::~Phone()
{
}
