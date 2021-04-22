#include "std_lib_facilities.h"
using namespace std;

template<typename Iter1, typename Iter2>
Iter2 mycopy(Iter1 f1, Iter1 e1, Iter2 f2)
{
	while (f1 != e1)
	{
		*f2 = *f1;
		f1++;
		f2++;
	}
	return f2;
}


int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	vector<int> vec{ 0,1,2,3,4,5,6,7,8,9 };

	list<int> lis{ 0,1,2,3,4,5,6,7,8,9 };

	int arr2[10];
	copy(arr, arr + 10, arr2);
	vector<int> vec2 = vec;
	list<int> lis2 = lis;

	for (int i = 0; i < 10; i++)
	{
		arr[i] += 2;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i=0;i<vec.size();i++)
	{
		vec[i] += 3;
		cout << vec[i] << " ";
	}
	cout << endl;
	for (list<int>::iterator it = lis.begin(); it!=lis.end();it++)
	{
		*it += 4;
		cout << *it << " ";
	}
	cout << endl;

	mycopy(arr, arr + 10, vec.begin());
	mycopy(lis.begin(), lis.end(), arr);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
	for (list<int>::iterator it = lis.begin(); it != lis.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<int>::iterator f1 = find(vec, 3);
	list<int>::iterator f2 = find(lis, 27);
	int count = 1;
	if (f1 != vec.end())
	{
		for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		{
			if (it == f1) cout << count << endl;
			else count++;
		}
	}
	else cout << "Nincs benne a vektorban" << endl;
	count = 1;
	if (f2 != lis.end())
	{
		for (list<int>::iterator it = lis.begin(); it != lis.end(); it++)
		{
			if (it == f2) cout << count << endl;
			else count++;
		}
	}
	else cout << "Nincs benne a listában" << endl;







}