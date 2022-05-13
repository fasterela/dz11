#ifndef DZ11_H
#define DZ11_H
#include <iostream>
using namespace std;

class Screen {
public:
	Screen();
	Screen(int d, double diag);
	virtual void print();
	~Screen();
private:
	int dpi;
	double diagonal;

};

class Keyboard {
public:
	Keyboard();
	Keyboard(bool b);
	virtual void print();
	~Keyboard();
private:
	bool built_in;
};

class Laptop : public Keyboard, public Screen {
public:
	Laptop();
	Laptop(bool b, int dpi, double diag, bool gm);
	void print() override;
	~Laptop();
private:
	bool gaming;
};
class Phone : public Keyboard, public Screen {
public:
	Phone();
	Phone(bool b, int dpi, double diag, bool andr);
	void print() override;
	~Phone();
private:
	bool android;
};
class PC : public Keyboard, public Screen {
public:
	PC();
	PC(bool b, int dpi, double diag, bool p);
	void print() override;
	~PC();
private:
	bool pow;
 };


#endif
