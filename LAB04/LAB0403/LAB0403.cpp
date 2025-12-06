#include <iostream>

using namespace std;

int main()
{
	int day = 20;

	switch (day)
	{
	case 1: cout << "วันจันทร์ \n";
		break;
	case 2: cout << " วันอังคาร \n";
		break;
	case 3: cout << " พุธ \n";
		break;
	default:
		cout << "ค่าไม่ตรงที่ต้องการ \n"; 
		break;


	}

	return 0;
}