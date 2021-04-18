#include "std_lib_facilities.h"
using namespace std;

template <typename T>
struct S
{
private:
	T val;
public:

	S(T v) : val{ v } {}
	T& get();
	T& get() const;
	void set(T v);
	void operator=(const T& t);
};

template <typename T>
T& S<T>::get()
{
	return val;
}

template <typename T>
T& S<T>::get() const
{
	return val;
}

template <typename T>
void S<T>::set(T v)
{
	val = v;
}


template <typename T>
void S<T>::operator=(const T& t)
{
	val = t;
}

template<typename T>
void read_val(T& v)
{
	cin >> v;
}

template<typename T>
istream& operator>>(istream& is, vector<T>& v)
{
	char c;
	is >> c;
	if (c != '{')
	{
		is.unget();
		return is;
	}
	v.clear();
	for (T val; is >> val;)
	{
		v.push_back(val);
		is >> c;
		if (c != ',') break;
	}
	return is;

}

template <typename T>
ostream& operator<<(ostream& os, vector<T>& v)
{
	cout << "{";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
		if (i != v.size() - 1) cout << ",";

	}
	cout << "}";
	return os;
}


int main()
{
	S <int> szam(9);
	S <char> karakter('b');
	S <double> tort(3.14);
	S <string> szoveg("bruh");
	S <vector<int>> szamok({ 1,2,3 });

	/*cout << szam.val << endl << karakter.val << endl << tort.val << endl << szoveg.val << endl;

	for (int i = 0; i < szamok.val.size(); i++)
	{
		cout << szamok.val[i] << endl;
	}
	*/
	cout << "szam: ";
	int i;
	read_val(i);
	szam = i;
	cout << "karakter: ";
	char c;
	read_val(c);
	karakter = c;
	cout << "tort: ";
	double d;
	read_val(d);
	tort = d;
	cout << "szoveg: ";
	string s;
	read_val(s);
	szoveg = s;
	cout << "vektor elemei: ";
	vector<int> v;
	read_val(v);
	szamok = v;
	
	cout << szam.get() << endl << karakter.get() << endl << tort.get() << endl << szoveg.get() << endl << szamok.get();
	/*
	for (int i = 0; i < szamok.get().size(); i++)
	{
		cout << szamok.get()[i];
	}
	*/




}