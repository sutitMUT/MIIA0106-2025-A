#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ประกาศแปรแบบทั่วไป
	// int scoure1, scoure2, scoure3, scoure4, scoure5;
	// ประกาศตัวแปรแบบ array

	// ให้นักศึกษา รับคะแนน จำนวนนักศึกษา 5 คน
	int scoure[5];

	// ให้นักศึกษา เขียนโปรแกรม รับคะแนน จำนวนนนักศึกษา N คน ตามที่ อาจารย์บอก 
	// int N = 20;
	//int scoure[N];

	int total = 0;
	double average = 0.0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter scoure" << (i + 1) << ": ";
		cin >> scoure[i];

		total = total + scoure[i];
	}
	average = total / 5.0;

	for(int i= 0;i<5;i++)
	{
		cout << "scoure" << (i + 1) << " = " << scoure[i] << "\n";
	}
	
	cout << "Total = " << total << "\n";
	cout << "Average = " << average << "\n";

	return 0;
}