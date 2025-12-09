#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0;

	// i++ ,i=i+1; i +=1;
	/*cout << "*********** For ********* \n";
	for (i = 0; i < 10; i++)
	{
		cout << (i + 1) << " Hello \n";

	}*/

	i = 0;
	cout << "*********** while ********* \n";
	while (i < 10)
	{
		i++;
		if (i == 6)
			continue;

		cout << (i + 1) << " Hello \n";
		cout << (i + 1) << " Hello \n";
		cout << (i + 1) << " Hello \n";
		

		
	}


	//i = 10;
	//cout << "********* do while *******\n";
	//do {
	//	cout << (i + 1) << " Hello \n";
	//	i++;

	//} while (i < 10);



	return 1;
}