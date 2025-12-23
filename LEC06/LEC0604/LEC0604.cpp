#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ประกาศแปรแบบทั่วไป
	// int scoure1, scoure2, scoure3, scoure4, scoure5;
	// ประกาศตัวแปรแบบ array
	int math[5];
	int entlish[5];
	int programming[5];

	int total_math = 0;
	int total_english = 0;
	int total_programming = 0;

	double average_math = 0.0;
	double average_english = 0.0;
	double average_programming = 0.0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter math scoure" << (i + 1) << ": ";
		cin >> math[i];
		total_math = total_math + math[i];

		cout << "Enter english scoure" << (i + 1) << ": ";
		cin >> entlish[i];
		total_english = total_english + entlish[i];

		cout << "Enter programming scoure" << (i + 1) << ": ";
		cin >> programming[i];
		total_programming = total_programming + programming[i];

	}
	average_math = total_math / 5.0;
	average_english = total_english / 5.0;
	average_programming = total_programming / 5.0;

	for (int i = 0; i < 5; i++)
	{
		cout << "math scoure" << (i + 1) << " = " << math[i] << "\n";
		cout << "english scoure" << (i + 1) << " = " << entlish[i] << "\n";
		cout << "programming scoure" << (i + 1) << " = " << programming[i] << "\n";
	}
	cout << "Total math = " << total_math << "\n";
	cout << "Average math = " << average_math << "\n";

	cout << "Total english = " << total_english << "\n";
	cout << "Average english = " << average_english << "\n";

	cout << "Total programming = " << total_programming << "\n";
	cout << "Average programming = " << average_programming << "\n";


	return 0;
}