#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	int x;
	int y;
	int res;
	int num1 = 0;
	int num2 = 1;
	int num_temp;
	int num_next = 1;
	int n;
	while (true)
	{
		cout << "choose: \n 1 - +\n 2 - -\n 3 - *\n 4 - /\n 5 - ostatoc ot delenia\n 6 - fibbonachi" << endl;
		cin >> res;
		if (cin.fail())
		{
			cout << "Incorrect input." << endl;
			return 0;
		}
		switch (res)
		{
		case 1:
			cout << "a =";
			cin >> a;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << "b = ";
			cin >> b;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << a + b << endl;
			break;
		case 2:
			cout << "a =";
			cin >> a;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << "b =";
			cin >> b;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << (a - b) << endl;
			break;
		case 3:
			cout << "a =";
			cin >> a;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << "b =";
			cin >> b;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << (a * b) << endl;
			break;
		case 4:
			cout << "a =";
			cin >> a;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << "b =";
			cin >> b;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			if (b == 0)
				cout << "na nol delit nelza";
			else
				cout << (a / b) << endl;
			break;
		case 5:
			cout << "x =";
			cin >> x;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			cout << "y =";
			cin >> y;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			if (x % y != 0) {
				cout << x % y << endl;
			}
			else {
				cout << "ostatca net" << endl;
			}
			break;
		case 6:
			cout << "chislo = ";
			cin >> n;
			if (cin.fail())
			{
				cout << "Incorrect input." << endl;
				return 0;
			}
			{
				if (n >= 1)
					cout << 0 << " ";
				if (n >= 2)
					cout << 1 << " ";
				for (int i = 0; i < n - 2; i++) {
					num_next = num1 + num2;
					cout << num_next << " ";
					num1 = num2;
					num2 = num_next;
				}
				cout << endl;
			}
			break;
		default:
			break;
		}
	}

}

