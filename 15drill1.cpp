#include "Simple_window.cpp"
#include "Graph.h"
double one(double x) { return 1; }

double slope(double x) { return x / 2; }

double square(double x) { return x * x; }

double sloping_cos(double x) { return cos(x) + slope(x); }

int main()
{
	Simple_window win{ Point{100,100}, 600, 600, "Function graphs" };

	Axis x{ Axis::x, Point{100,300},400,20,"x axis" };
	Axis y{ Axis::y, Point{300,500},400,20,"y axis" };
	x.set_color(Color::red);
	y.set_color(Color::red);

	double xscale = 20;
	double yscale = 20;
	double min = -10;
	double max = 11;
	Point orig{ 300,300 };
	int points = 400;

	Function f1{ one,min,max,orig,points,xscale,yscale };
	Function f2{ slope,min,max,orig,points,xscale,yscale };
	Function f3{ square,min,max,orig,points,xscale,yscale };
	Function f4{ cos,min,max,orig,points,xscale,yscale };
	Function f5{ sloping_cos,min,max,orig,points,xscale,yscale };
	f4.set_color(Color::blue);

	Text t{ Point{100,380}, "x/2" };

	win.attach(f1);
	win.attach(f2);
	win.attach(f3);
	win.attach(f4);
	win.attach(f5);
	win.attach(t);
	win.attach(x);
	win.attach(y);

	win.wait_for_button();
}