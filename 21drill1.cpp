#include "std_lib_facilities.h"
using namespace std;

struct Item
{
	string name;
	int iid;
	double value;

	Item()
	{
		name = "";
		iid = 0;
		value = 0.0;
	}
	Item(string n, int i, double v) : name(n), iid(i), value(v) {}

};


void print(vector<Item>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].name << " " << v[i].iid << " " << v[i].value << endl;
	}
	
}

void print2(list<Item>& l)
{
	for (list<Item>::iterator it=l.begin();it!=l.end();it++)
	{
		cout << (*it).name << " " << (*it).iid << " " << (*it).value << endl;
	}

}

vector<Item>& erase2(vector<Item>& v, string name)
{
	for (vector<Item>::iterator it = v.begin(); it != v.end(); it++)
	{
		if ((*it).name == name)
		{
			v.erase(it);
			return v;
		}
	}
}

vector<Item>& erase3(vector<Item>& v, int iid)
{
	for (vector<Item>::iterator it = v.begin(); it != v.end(); it++)
	{
		if ((*it).iid == iid)
		{
			v.erase(it);
			return v;
		}
	}
}

list<Item>& erase4(list<Item>& l, string name)
{
	for (list<Item>::iterator it = l.begin(); it != l.end(); it++)
	{
		if ((*it).name == name)
		{
			l.erase(it);
			return l;
		}
	}
}

list<Item>& erase5(list<Item>& l, int iid)
{
	for (list<Item>::iterator it = l.begin(); it != l.end(); it++)
	{
		if ((*it).iid == iid)
		{
			l.erase(it);
			return l;
		}
	}
}

int main()
{
	vector<Item> vec;
	ifstream ifs ("21drill.txt");
	string na;
	int ii;
	double va;
	Item item;
	while (ifs >> na >> ii >> va)
	{
		item.name = na;
		item.iid = ii;
		item.value = va;
		vec.push_back(item);
	}
	ifs.close();

	sort(vec.begin(), vec.end(), [](Item i1, Item i2) {return i1.name < i2.name; });

	sort(vec.begin(), vec.end(), [](Item i1, Item i2) {return i1.iid < i2.iid; });

	sort(vec.begin(), vec.end(), [](Item i1, Item i2) {return i1.value > i2.value; });

	vec.insert(vec.end(), Item("horse shoe", 99, 12.34));
	vec.insert(vec.end(), Item("Canon S400", 9988, 499.95));

	erase2(vec, "starrenegades");
	erase2(vec, "dyinglight");

	erase3(vec, 20162);
	erase3(vec, 20163);

	list<Item> lis;
	ifstream ifs2("21drill.txt");
	while (ifs2 >> na >> ii >> va)
	{
		item.name = na;
		item.iid = ii;
		item.value = va;
		lis.push_back(item);
	}
	ifs2.close();

	lis.sort( [](Item i1, Item i2) {return i1.name < i2.name; });

	lis.sort([](Item i1, Item i2) {return i1.iid < i2.iid; });

	lis.sort([](Item i1, Item i2) {return i1.value < i2.value; });

	lis.insert(lis.end(), Item("horse shoe", 99, 12.34));
	lis.insert(lis.end(), Item("Canon S400", 9988, 499.95));

	erase4(lis, "starrenegades");
	erase4(lis, "dyinglight");

	erase5(lis, 20162);
	erase5(lis, 20163);
	print2(lis);




}