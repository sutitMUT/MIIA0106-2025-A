#include <iostream>
#include <string>

using namespace std;

int main()
{
	int scoure1, scoure2, scoure3, scoure4, scoure5;
	int total = 0;
	double average = 0.0;

	cout << "Enter scoure1: ";
	cin >> scoure1;
	cout << "Enter scoure2: ";
	cin >> scoure2;
	cout << "Enter scoure3: ";
	cin >> scoure3;
	cout << "Enter scoure4: ";
	cin >> scoure4;
	cout << "Enter scoure5: ";
	cin >> scoure5;

	total = scoure1 + scoure2 + scoure3 + scoure4 + scoure5;
	average = total / 5.0;

	cout << "scoure1 = " << scoure1 << "\n";
	cout << "scoure2 = " << scoure2 << "\n";
	cout << "scoure3 = " << scoure3 << "\n";
	cout << "scoure4 = " << scoure4 << "\n";
	cout << "scoure5 = " << scoure5 << "\n";

	cout << "Total = " << total << "\n";
	cout << "Average = " << average << "\n";





	return 0;
}