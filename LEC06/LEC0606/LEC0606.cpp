#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ประกาศแปรแบบทั่วไป
	// int scoure1, scoure2, scoure3, scoure4, scoure5;
	// ประกาศตัวแปรแบบ array

	/*int math[5];
	int entlish[5];
	int programming[5];*/
	int lengstudent = 5;
	int scoure[5][3]; // 5 นักเรียน 3 วิชา

	/*int total_math = 0;
	int total_english = 0;
	int total_programming = 0;*/

	int total[5] = { 0,0,0,0,0 };
	/*
	totla[0] = total_math
	totla[1] = total_english
	totla[2] = total_programming

	*/

	/*double average_math = 0.0;
	double average_english = 0.0;
	double average_programming = 0.0;*/

	double average[5] = { 0.0,0.0,0.0,0.0,0.0 };
	/*
	average[0] = average_math
	average[1] = average_english
	average[2] = average_programming

	*/

	// i แทน จำนวนของ นักเรียน
	for (int i = 0; i < 5; i++)
	{
		cout << "---- Enter sutudent  " << (i + 1) << " ----- \n";
		// j แทน จำนวนของ วิชา
		for (int j = 0; j < 3; j++)
		{
			cout << "  Subject " << (j + 1) << ": ";
			cin >> scoure[i][j]; // i แทน นักเรียน , j แทน วิชา
			total[i] = total[i] + scoure[i][j];
		}
		average[i] = total[i] / 3.0;
	}

	// แสดงผล
	cout << "----- Result ----- \n";
	// แสดงผล head table
	cout << "Student\tSubject1\tSubject2\tSubject3\tTotal\tAverage\n";
	for (int i = 0; i < 5; i++)
	{
		cout << (i + 1) << "\t";
		for (int j = 0; j < 3; j++)
		{
			cout << scoure[i][j] << "\t\t";
		}
		cout << total[i] << "\t" << average[i] << "\n";
	}




	return 0;
}