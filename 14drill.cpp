#include "std_lib_facilities.h"
using namespace std;

struct B1 {
public:

	virtual void vf() { cout << "B1::fv()" << endl; }
	void f() { cout << "B1::f()" << endl; }
	virtual void pvf() = 0;
};
struct D1 : B1 {
public: 

	void vf() { cout << "D1::fv()" << endl; }
	void f() { cout << "D1::f()" << endl; }

};

struct D2 : D1 {
	void pvf() { cout << "mükszik" << endl; }
};

struct B2
{
	virtual void pvf() = 0;
};

struct D21 : B2 {
	string a = "megy";
	void pvf() { cout << a << endl; }
};

struct D22 : B2 {
	int a = 3;
	void pvf() { cout << a << endl; }
};



void Call(B1& a)
{
	a.vf();
	a.f();
}

void f(B2& a)
{
	a.pvf();
}

int main()
{
	/*
	B1 b;
	D1 d;
	b.vf();
	b.f();
	d.vf();
	d.f();
	cout << endl;
	Call(d);
	D2 d2;
	d2.vf();
	d2.f();
	d2.pvf();
	*/
	D21 d21;
	D22 d22;
	f(d21);
	f(d22);
}