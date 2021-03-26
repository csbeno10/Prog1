#include "std_lib_facilities.h"
using namespace std;

struct Person {
	private:
	string firstname, lastname;
	int age;

	public:

	Person () {};
	Person(string fn, string ln, int a);

	string const getfname() { return firstname; }
	string const getlname() { return lastname; }
	int const getage() { return age; }

};

Person::Person(string fn, string ln, int a) : firstname{ fn }, lastname{ ln }, age{ a }
{
	if (a < 0 || a > 150) error("invalid age in Person()");
	string n = fn + ln;
	for (char c : n)
	{
		switch (c) {
		case ';': case ':': case '"': case '[': case ']': case '*': case '&': case '^': case '%': case '$': case '#': case '@': case '!': case '.':
			error("invalid name in Person()");
			break;
		default:
			break;
		}
	}
}

	istream& operator>> (istream& is, Person& p)
	{
		string fn,ln;
		int a;
		is >> fn >> ln >> a;
		p = Person(fn, ln, a);
		return is;
	}
	ostream& operator<< (ostream& os, Person& p)
	{
		cout << "Name: " << p.getfname() << " " << p.getlname() << " " << "Age: " << p.getage();
		return os;
	}

int main()
try {
	/*Person p;
	p.name = "Goofy";
	p.age = 63;
	cout << p.name << endl << p.age << endl;
	*/
	/*Person p;
	cin >> p;
	cout << p;
	*/
	vector<Person> v;
	Person p;
	int amount;
	cout << "Number of people to put in the vector: ";
	cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		cin >> p;
		v.push_back(p);
	}

	for (Person p : v)
	{
		cout << p << endl;
	}

}
catch (std::exception& e)
{
	std::cerr << "Exception: " << e.what() << endl;
	return 1;
}
catch (...)
{
	std::cerr << "Unknown error" << endl;
	return 2;
}