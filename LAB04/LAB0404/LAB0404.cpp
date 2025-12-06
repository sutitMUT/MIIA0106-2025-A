#include <iostream>

using namespace std;

int main()
{
	int i = 0;

	// i= i+1;
	// i++
	// i= i+10
	// i +=10;
	cout << "start \n";
	for (i = 10; i > 0; i--)
	{
		if (i % 2 != 0)
			continue;

		cout << "i=" << i << endl;
		//if (i % 2 == 0)
		//{
		//// เลข คู่	
		//}
		//else
		//{
		//	cout << "i=" << i << endl;
		//}

	}
	cout << "stop\n";

	cout << "start \n";
	for (i = 1; i < 11; i++)
	{
		cout << "i=" << i << endl;
	}
	cout << "stop\n";

	// while 

	i = 20;
	cout << "start While \n";
	while (i < 11)
	{
		cout << "i=" << i << endl;
		i = i + 1;
	}
	cout << "stop while\n";

	cout << "--- start do While ------ \n";
	i = 20;
	do {
		cout << "i=" << i << endl;
		i = i + 1;

	} while (i < 11);
	cout << "stop do while\n";

	cout << "--- star  break  ------ \n";
	for (i = 0; i < 10; i++)
	{
		cout << "i=" << i << endl;
		if (i == 5)
		{
			cout << "i==5 break \n";
			break;
		}

	}
	cout << "---stop  break  ------ \n";

	int j = 0;
	int k = 30;
	do
	{
		cout << "\n Enter number: ";
		cin >> j;

		if (j == k)
		{
			break;
		}
		else if (j > k)
		{
			cout << "J > K \n";
		}
		else if (j < k)
		{
			cout << " J < K ";
		}

	} while (true);
	cout << "---stop  break  ------ \n";




	cout << "---start     ------ \n";
	for (i = 0; i < 10; i++)
	{
		cout << "----- " << i << " ---- \n";

		if (i == 2)
			continue;

		cout << " function 1---- \n";
		cout << " function 2---- \n";
		cout << " function 3---- \n";

	}
	 
	return 0;

}