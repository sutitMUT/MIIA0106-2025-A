#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name1, name2, name3;
	string id1, id2, id3;
	double scoure1, scoure2, scoure3;

	cout << "Enter name1: ";
	getline(cin, name1);
	cout << "Enter id1: ";
	cin >> id1;
	cout << "Enter scoure1: ";
	cin >> scoure1;
	cin.ignore();

	cout << "Enter name2: ";
	getline(cin, name2);
	cout << "Enter id2: ";
	cin >> id2;
	cout << "Enter scoure2: ";
	cin >> scoure2;
	cin.ignore();

	cout << "Enter name3: ";
	getline(cin, name3);
	cout << "Enter id3: ";
	cin >> id3;
	cout << "Enter scoure3: ";
	cin >> scoure3;
	cout << "\n\n";

	cout << "Name\tID\tScoure\n";
	cout << name1 << "\t" << id1 << "\t" << scoure1 << "\n";
	cout << name2 << "\t" << id2 << "\t" << scoure2 << "\n";
	cout << name3 << "\t" << id3 << "\t" << scoure3 << "\n";


	return 0;
}