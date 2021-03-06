#include "Simple_window.cpp"
#include "Graph.h"
int main()
{
	int xmax = 1720;
	int ymax = 880;

	Simple_window win{ Point{100,100}, xmax, ymax, "Hazi" };

	//1. feladat

	Graph_lib::Rectangle f1{ Point{50,50}, 50, 50 };
	f1.set_color(Color::blue);

	Graph_lib::Polygon f11;
	f11.add(Point{ 150,50 });
	f11.add(Point{ 200,50 });
	f11.add(Point{ 200,100 });
	f11.add(Point{ 150,100 });
	f11.set_color(Color::red);

	//2. feladat

	Graph_lib::Rectangle f2{ Point{250,50}, 100, 30 };

	Text f22{ Point{280,70}, "Howdy!" };

	//3. feladat

	Text f3{ Point{400,160}, "Cs." };
	f3.set_font_size(150);
	f3.set_color(Color::yellow);
	Text f33{ Point{620,150}, "B." };
	f33.set_color(Color::green);
	f33.set_font_size(150);

	//4. feladat

	Graph_lib::Rectangle f41{ Point{800,50}, 50, 50 };
	f41.set_fill_color(Color::red);
	Graph_lib::Rectangle f42{ Point{851,50}, 50, 50 };
	f42.set_fill_color(Color::white);
	Graph_lib::Rectangle f43{ Point{902,50}, 50, 50 };
	f43.set_fill_color(Color::red);
	Graph_lib::Rectangle f44{ Point{800,101}, 50, 50 };
	f44.set_fill_color(Color::white);
	Graph_lib::Rectangle f45{ Point{851,101}, 50, 50 };
	f45.set_fill_color(Color::red);
	Graph_lib::Rectangle f46{ Point{902,101}, 50, 50 };
	f46.set_fill_color(Color::white);
	Graph_lib::Rectangle f47{ Point{800,152}, 50, 50 };
	f47.set_fill_color(Color::red);
	Graph_lib::Rectangle f48{ Point{851,152}, 50, 50 };
	f48.set_fill_color(Color::white);
	Graph_lib::Rectangle f49{ Point{902,152}, 50, 50 };
	f49.set_fill_color(Color::red);

	//5. feladat

	Graph_lib::Rectangle f5{ Point {40,40 }, xmax /3 *2, ymax /4 *3 };

	Graph_lib::Rectangle f51{ Point {20,20 }, xmax / 3 * 2 +40, ymax / 4 * 3 +40};
	f51.set_color(Color::red);
	f51.set_style(Line_style(Line_style::solid, 15));

	//6. feladat

	/*Simple_window h{ Point{100,100}, 2000, 2000, "teszt"};

	Graph_lib::Rectangle f6{ Point{100,100}, 2000, 2000 };
	win.attach(f6);
	*/

	//7. feladat

	Graph_lib::Rectangle f7{ Point{100,400},200,200 };
	f7.set_fill_color(Color::yellow);
	Graph_lib::Rectangle f71{ Point{125,425},50,50 };
	f71.set_fill_color(Color::dark_blue);
	Graph_lib::Rectangle f72{ Point{225,425},50,50 };
	f72.set_fill_color(Color::dark_blue);
	Graph_lib::Rectangle f73{ Point{175,500},50,100 };
	f73.set_fill_color(Color::dark_green);

	Graph_lib::Polygon f74;
	f74.add(Point{ 100,400 });
	f74.add(Point{ 300,400 });
	f74.add(Point{ 200,250 });
	f74.set_fill_color(Color::red);

	Open_polyline f75;
	f75.add(Point{ 240,330 });
	f75.add(Point{ 240,250 });
	f75.add(Point{ 260,250 });
	f75.add(Point{ 260,360});
	f75.set_fill_color(Color::black);

	//8. feladat

	Circle f81{ Point{400,400},50 };
	f81.set_color(Color::blue);
	f81.set_style(Line_style(Line_style::solid, 5));
	Circle f82{ Point{450,450},50 };
	f82.set_color(Color::yellow);
	f82.set_style(Line_style(Line_style::solid, 5));
	Circle f83{ Point{500,400},50 };
	f83.set_color(Color::black);
	f83.set_style(Line_style(Line_style::solid, 5));
	Circle f84{ Point{550,450},50 };
	f84.set_color(Color::green);
	f84.set_style(Line_style(Line_style::solid, 5));
	Circle f85{ Point{600,400},50 };
	f85.set_color(Color::red);
	f85.set_style(Line_style(Line_style::solid, 5));

	//9. feladat

	Simple_window a{ Point{150,150},600, 800, "HACKERMAN" };
	Image f9{ Point{50,50}, "3DM.jpg" };
	Text f91{ Point{50,700}, "3DM preparing for the first battle against DENUVO " };
	f91.set_font_size(20);
	Text f92{ Point{50,730}, "(2014 september 23 colorized)" };
	f92.set_font_size(20);

	win.attach(f1);
	win.attach(f11);
	win.attach(f2);
	win.attach(f22);
	win.attach(f3);
	win.attach(f33);
	win.attach(f41);
	win.attach(f42);
	win.attach(f43);
	win.attach(f44);
	win.attach(f45);
	win.attach(f46);
	win.attach(f47);
	win.attach(f48);
	win.attach(f49);
	win.attach(f5);
	win.attach(f51);
	win.attach(f7);
	win.attach(f71);
	win.attach(f72);
	win.attach(f73);
	win.attach(f74);
	win.attach(f75);
	win.attach(f81);
	win.attach(f82);
	win.attach(f83);
	win.attach(f84);
	win.attach(f85);
	a.attach(f9);
	a.attach(f91);
	a.attach(f92);
	a.wait_for_button();
	win.wait_for_button();
}