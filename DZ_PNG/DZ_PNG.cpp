//DZ_#1

#include<vector>
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	const int n = 3;
	vector<int>arr0{ 0,1,2 };
	cout << arr0[2] << endl;
	arr0.resize(10);
	cout << arr0[9] << endl;

	for (int i = 0; i < 10; i++)
	{
		int n;
		n = rand() % 10;
		arr0[i] = n;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << " " << arr0[i];
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		int n = arr0[i];
		n = n * n;
		arr0[i] = n;
		cout << " " << arr0[i];
	}
}