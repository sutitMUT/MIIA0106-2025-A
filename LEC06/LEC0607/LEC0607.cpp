#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 1.ประกาศแปรแบบทั่วไป
	// int scoure1, scoure2, scoure3, scoure4
	// ..... , scoure100,scoureN;
	
	// 2.ประกาศตัวแปรแบบ array
	// int scoure[100]; // คงที่

	// รับคะแนน 1 วิชา เป็น 3 วิชา
	// int scoure_math[100];
	// int scoure_english[100];
	// int scoure_programming[100];
	// 3. array 2 มิติ
	// int scoure[100][3]; // 100 นักเรียน 3 วิชา
	
	// 4.dynamic array
	// int* scoure = new int[N]; // จองหน่วยความจำแบบไดนามิก


	int N = 0;

	cout << "Enter number of student: ";
	cin >> N;
	// int scoure[N]; // ไม่ได้ เนื่องจาก มาตรฐาน C++ ก่อน C++11 ไม่รองรับ
	int* scoure = new int[N]; // จองหน่วยความจำแบบไดนามิก

	int total = 0;
	double average = 0.0;

	for (int i = 0; i < N; i++)
	{
		cout << "Enter scoure" << (i + 1) << ": ";
		cin >> scoure[i];

		total = total + scoure[i];
	}
	average = total / (double)N;
	for (int i = 0; i < N; i++)
	{
		cout << "scoure" << (i + 1) << " = " << scoure[i] << "\n";
	}

	delete[] scoure; // คืนหน่วยความจำ

	return 0;
}