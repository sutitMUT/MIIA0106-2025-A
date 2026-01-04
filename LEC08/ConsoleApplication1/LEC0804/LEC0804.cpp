#include <iostream>
#include <string>
using namespace std;

struct  Student
{
	string id;
	string nickname;
	string lineID;
	string phoneNumber;

};

// สร้างฟังก์ชัน สำหรับ รับข้อมูลนักเรียน
void inputStudentData(Student student[],int size)
{
	for(int i= 0; i < size; i++)
	{
		cout << "=== Enter data for student " << i + 1 << " ===" << endl;
		cout << "Enter ID: ";
		cin >> student[i].id;
		cout << "Enter Nickname: ";
		cin >> student[i].nickname;
		cout << "Enter Line ID: ";
		cin >> student[i].lineID;
		cout << "Enter Phone Number: ";
		cin >> student[i].phoneNumber;
		cout << endl;
	}	
}

void swapStudent(Student& a, Student& b) {
	Student temp = a;
	a = b;
	b = temp;
}

void sortByID(Student students[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (students[j].id > students[j + 1].id) {
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}

void printStudents(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "ID       : " << students[i].id << endl;
		cout << "Nickname : " << students[i].nickname << endl;
		cout << "Line ID  : " << students[i].lineID << endl;
		cout << "Phone    : " << students[i].phoneNumber << endl;
		cout << "----------------------\n";
	}
}

int main() {
	const int SIZE = 2;
	Student students[SIZE];

	typedef int Mynumber;

	Mynumber a = 10;

	inputStudentData(students, SIZE);

	sortByID(students, SIZE);   // เรียงจาก ID น้อย → มาก

	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);

	return 0;
}


