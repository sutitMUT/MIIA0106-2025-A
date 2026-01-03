#include <iostream>
#include <string>

using namespace std;


// สามารถใช้ swap  ที่เป็น library ได้เลย แต่ขอเขียนฟังก์ชัน swap เองเพื่อความเข้าใจ
void swapString(string& a, string& b) {
	string temp = a;
	a = b;
	b = temp;
}


int main ()
{ // เก็บข้อมูลนักเรยน 5 คน
	const int SIZE = 5;
	string nickname[5];
	string studentIDs[5];
	string lindIds[5];
	string phoneNumbers[5];

	// รับข้อมูลนักเรียน

	for (int i = 0;i < 5; i++)
	{
		cout << " === student " << i + 1 << " === " << endl;
		cout << "Enter nickname: ";
		cin >> nickname[i];
		cout << "Enter student ID: ";
		cin >> studentIDs[i];
		cout << "Enter Line ID: ";
		cin >> lindIds[i];
		cout << "Enter phone number: ";
		cin >> phoneNumbers[i];
		cout << endl;
	}

	// แสดงข้อมูลนักเรียน cout
	cout << "=== Student Information ===" << endl;
	cout << "No\tnickname\t student ID\tLine ID\t phone number" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "" << i + 1 << "\t";
		cout << nickname[i] << "\t\t";
		cout << studentIDs[i] << "\t\t";
		cout << lindIds[i] << "\t\t";
		cout << phoneNumbers[i] << "\\tt";
		cout << endl;
	}


	// ===== Sort ตาม ID (น้อย → มาก) =====
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - 1 - i; j++) {
			if (studentIDs[j] > studentIDs[j + 1]) {
				// สลับ ID
				swapString(studentIDs[j], studentIDs[j + 1]);
				// สลับข้อมูลที่เกี่ยวข้องทั้งหมด
				swapString(nickname[j], nickname[j + 1]);
				swapString(lindIds[j], lindIds[j + 1]);
				swapString(phoneNumbers[j], phoneNumbers[j + 1]);
			}
		}
	}


	cout << "=== Student Information ===" << endl;
	cout << "No\tnickname\t student ID\tLine ID\t phone number" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "" << i + 1 << "\t";
		cout << nickname[i] << "\t\t";
		cout << studentIDs[i] << "\t\t";
		cout << lindIds[i] << "\t\t";
		cout << phoneNumbers[i] << "\t\ft";
		cout << endl;
	}

	return 0;
}