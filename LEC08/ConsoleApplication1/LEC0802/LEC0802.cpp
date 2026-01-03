#include<iostream>
#include<string>
using namespace std;

// ตัวแปรแบบ โครงสร้าง
struct Student {
	string nickname;
	string studentID;
	string lineID;
	string phoneNumber;
	int age;
};

int main()
{
	// สร้างตัวแปร
	int aa;
	string bb;

	Student s1;
	s1.nickname = "Bob";
	s1.studentID = "65010123";
	s1.lineID = "bobline";
	s1.phoneNumber = "0812345678";
	s1.age = 20;



	Student s2;
	s2.nickname = "Alice";
	s2.studentID = "65010234";
	s2.lineID = "aliceline";
	s2.phoneNumber = "0898765432";
	s2.age = 19;

	cout << " S2 info:" << endl;
	cout << "Nickname: " << s2.nickname << endl;
	cout << "Student ID: " << s2.studentID << endl;
	cout << "Line ID: " << s2.lineID << endl;
	cout << "Phone Number: " << s2.phoneNumber << endl;
	cout << "Age: " << s2.age << endl;


	cout << " S1 info:" << endl;
	cout << "Nickname: " << s1.nickname << endl;
	cout << "Student ID: " << s1.studentID << endl;
	cout << "Line ID: " << s1.lineID << endl;
	cout << "Phone Number: " << s1.phoneNumber << endl;
	cout << "Age: " << s1.age << endl;


	// arrary of structure
	const int SIZE = 2;
	Student students[SIZE];
	// คนที่ 1;
	students[0].nickname = "Charlie";
	students[0].studentID = "65010345";
	students[0].lineID = "charlieline";
	students[0].phoneNumber = "0823456789";
	students[0].age = 21;
	// คนที่ 2;
	students[1].nickname = "Diana";
	students[1].studentID = "65010456";
	students[1].lineID = "dianaline";
	students[1].phoneNumber = "0834567890";
	students[1].age = 22;

	cout << " Student array info:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Nickname: " << students[i].nickname << endl;
		cout << "Student ID: " << students[i].studentID << endl;
		cout << "Line ID: " << students[i].lineID << endl;
		cout << "Phone Number: " << students[i].phoneNumber << endl;
		cout << "Age: " << students[i].age << endl;
	}



	return 0;

	





}