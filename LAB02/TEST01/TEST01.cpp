#include<iostream>

using namespace std;

void main()
{
	int a = 1;
	int b = 2;
	a = 1,b = a + b;

	// a++
	// ++a
	if (a > 0)
	{
		cout << "true" << endl;
	}

	a > 0 ? cout << "true" << endl : cout << "0" << endl;
	
	a = a + 1;
	cout << "a = a + 1= " << a << endl;

	a += 1;
	cout << "a = a + 1= " << a << endl;

}