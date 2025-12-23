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

	/*int total_math = 0;
	int total_english = 0;
	int total_programming = 0;*/

	int total[3] = { 0,0,0 };
	/*
	totla[0] = total_math
	totla[1] = total_english
	totla[2] = total_programming

	*/

	/*double average_math = 0.0;
	double average_english = 0.0;
	double average_programming = 0.0;*/

	double average[3] = { 0.0,0.0,0.0 };
	/*
	average[0] = average_math
	average[1] = average_english
	average[2] = average_programming

	*/

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter math scoure" << (i + 1) << ": ";
		cin >> math[i];
		total[0] = total[0] + math[i];

		cout << "Enter english scoure" << (i + 1) << ": ";
		cin >> entlish[i];
		total[1] = total[1] + + entlish[i];

		cout << "Enter programming scoure" << (i + 1) << ": ";
		cin >> programming[i];
		total[2] = total[2] + + programming[i];

	}
	average[0] = total[0] / 5.0;
	average[1] = total[1] / 5.0;
	average[2] = total[2] / 5.0;

	for (int i = 0; i < 5; i++)
	{
		cout << "math scoure" << (i + 1) << " = " << math[i] << "\n";
		cout << "english scoure" << (i + 1) << " = " << entlish[i] << "\n";
		cout << "programming scoure" << (i + 1) << " = " << programming[i] << "\n";
	}
	cout << "Total math = " << total[0] << "\n";
	cout << "Average math = " << average[0] << "\n";

	cout << "Total english = " << total[1] << "\n";
	cout << "Average english = " << average[1] << "\n";

	cout << "Total programming = " << total[2] << "\n";
	cout << "Average programming = " << average[2] << "\n";


	return 0;
}