#include "Simple_window.cpp"
#include "Graph.h"
int main()
{
	Simple_window win{ Point{0,0}, 800, 1000, "drill13" };

	Vector_ref<Graph_lib::Rectangle> vr;
	Vector_ref<Image> vr2;
	int a = 0;
	int b = 0;
	int c = 100;
	int d = 500;

	for(int i=1;i<=64;i++)
	{
		vr.push_back(
			new Graph_lib::Rectangle{ Point{a,b},100,100 });
		if (a == b) vr[i - 1].set_fill_color(Color::red);
		win.attach(vr[i-1]);
		if (i % 8 == 0)  a = 0; 
		else  a += 100; 
		if (i % 8 == 0)  b += 100; 
	}
	for (int i = 0; i < 3; i++)
	{
		vr2.push_back(
			new Image{ Point{c, d}, "kekw1.jpg" });
		win.attach(vr2[i]);
		c += 200;
		d -= 200;
	}
	Image kekw{ Point{0,0}, "kekw2.jpg" };
	a = 100;
	b = 0;
	win.attach(kekw);
	win.wait_for_button();
	for (int i = 1; i < 64; i++)
	{
		kekw.move(a, b);
		if (i % 8 == 0) kekw.move(-800, 100);
		win.wait_for_button();

	}
}