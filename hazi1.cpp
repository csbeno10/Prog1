#include "Simple_window.cpp"
#include "Graph.h"
int main()
{

	int xmax = 600;
	int ymax = 400;

	Simple_window win{ Point{100,100}, xmax, ymax, "My Window" };

	Axis xa{ Axis::x, Point{20,350}, 500, 25, "x axis" };
	Axis ya{ Axis::y, Point{20,350}, 300, 15, "y axis" };

	Function sin ([](double x) { return cos(x); }, 0, 50, Point{ 20,350 }, 1000, 25, 25);
	sin.set_color(Color::yellow);

	Graph_lib::Polygon poly;
	poly.add(Point{ 50,200 });
	poly.add(Point{ 350,100 });
	poly.add(Point{ 400,200 });
	poly.set_color(Color::blue);
	poly.set_style(Line_style::dash);

	Graph_lib::Rectangle rec{ Point{500,300}, 100,100};
	rec.set_fill_color(Color::cyan);

	Closed_polyline closed;
	closed.add(Point{ 200,50 });
	closed.add(Point{ 400,50 });
	closed.add(Point{ 400,100 });
	closed.add(Point{ 200,100 });
	closed.add(Point{ 300,75 });
	closed.set_fill_color(Color::black);

	Text t{ Point{254,290}, "SUS" };
	t.set_font_size(45);
	t.set_color(Color::white);

	Image b { Point{400,100}, "brazil.jpg" };

	Circle c { Point{300,275}, 50 };
	c.set_fill_color(Color::red);

	win.attach(xa);
	win.attach(ya);
	win.attach(sin);
	win.attach(poly);
	win.attach(rec);
	win.attach(closed);
	win.attach(b);
	win.attach(c);
	win.attach(t);

	win.wait_for_button();
}
