// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าจากผู้ใช้เก็บลง s1
// TODO 3) แสดงผลข้อมูลของ s1

#include <iostream>
#include <string>
using namespace std;

struct Student007 {
    // TODO
	string id;
	string nickname;
	string lineId;
	string phone;
};

int main() {
	Student007 s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cout << "Enter ID: ";
	cin >> s1.id;

	cout << "Enter Nickname: ";
	cin >> s1.nickname;

	cout << "Enter Line ID: ";
	cin >> s1.lineId;
	
	cout << "Enter Phone: ";
	cin >> s1.phone;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
	cout << "ID\tnickname\tLine ID\t Phone \n";
	cout << s1.id << "\t" << s1.nickname << "\t" << s1.lineId << "\t" << s1.phone << "\n";


    return 0;
}

/*

struct Name {
// ตามด้วย ตัวแปร ที่ต้องการ 
string firstName;
	string lastName;
};

Name n1;

n1.firstName = "Somchai";
n1.lastName = "Sukjai";

*/
