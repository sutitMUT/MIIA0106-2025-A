#include <iostream>
#include <string>


using namespace std;

void main()
{
	string Myname = "Sutit";
	string Surname = "Ongart";
	int Age = 27;

	cout << " *********** " << endl;
	cout << " My name is sutit \n Surname Ongart \n";

	cout << " *********** " << endl;

	cout << " My name is "<< Myname <<" \n Surname "<< Surname  <<" \n  Age "<< Age << " \n";

	cout << " **** New Data ******* " << endl;
	cout << " Enter Your Name:";
	cin >> Myname;

	cout << " Your name is " << Myname << " \n";

	cout << "Enter your Surname ";
	cin >> Surname;

	cout << " Your Surname " << Surname;

	cout << " Enter your age ";
	cin >> Age;
	cin.ignore();

	cout << " Your age is " << Age;

	string Myname_surname = "";

	cout << " **** New Data ******* " << endl;
	cout << " Enter Your Name and Surname :";
	//cin >> Myname_surname;
	getline(cin, Myname_surname);
	cout << " Your name is" << Myname_surname;

}
