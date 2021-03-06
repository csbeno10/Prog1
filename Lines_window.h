#include "GUI.h"

using namespace Graph_lib;

struct Lines_window : Graph_lib::Window {
	Lines_window(Point xy, int w, int h, const string& title);

private:
	Open_polyline lines;

	Button next_button;
	Button quit_button;
	In_box next_x;
	In_box next_y;
	Out_box xy_out;
	Menu color_menu;
	Button menu_button;
	Menu linestyle_menu;
	Button lsmenu_button;

	void change(Color c) { lines.set_color(c); }
	void hide_menu() { color_menu.hide(); menu_button.show(); }

	void red_pressed() { change(Color::red); hide_menu(); }
	void blue_pressed() { change(Color::blue); hide_menu(); }
	void black_pressed() { change(Color::black); hide_menu(); }

	void changestyle(Line_style a) { lines.set_style(a); }
	void hide_lsmenu() { linestyle_menu.hide(); lsmenu_button.show(); }

	void solid_pressed() { changestyle(Line_style::solid); hide_lsmenu(); }
	void dash_pressed() { changestyle(Line_style::dash); hide_lsmenu(); }
	void dot_pressed() { changestyle(Line_style::dot); hide_lsmenu(); }

	void menu_pressed() { menu_button.hide(); color_menu.show(); }
	void lsmenu_pressed() { lsmenu_button.hide(); linestyle_menu.show(); }
	void next();
	void quit();

	static void cb_red(Address, Address pw) { reference_to<Lines_window>(pw).red_pressed(); }
	static void cb_blue(Address, Address pw) { reference_to<Lines_window>(pw).blue_pressed(); }
	static void cb_black(Address, Address pw) { reference_to<Lines_window>(pw).black_pressed(); }
	static void cb_solid(Address, Address pw) { reference_to<Lines_window>(pw).solid_pressed(); }
	static void cb_dash(Address, Address pw) { reference_to<Lines_window>(pw).dash_pressed(); }
	static void cb_dot(Address, Address pw) { reference_to<Lines_window>(pw).dot_pressed(); }
	static void cb_menu(Address, Address pw) { reference_to<Lines_window>(pw).menu_pressed(); }
	static void cb_lsmenu(Address, Address pw) { reference_to<Lines_window>(pw).lsmenu_pressed(); }
	static void cb_next(Address, Address pw) { reference_to<Lines_window>(pw).next(); }
	static void cb_quit(Address, Address pw) { reference_to<Lines_window>(pw).quit(); }


};
