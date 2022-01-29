#include <iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0, num, count = 1;

	while (count <= 10) {
		cout << "Enter number: ";
		cin >> num;

		if (num > num1)
			num1 = num;

		if (num1 > num2) {
			num = num2;
			num2 = num1;
			num1 = num;
		}

		count++;
	}

	cout << "Largest number is: " << num2 << endl;
	cout << "2nd largest numbre is: " << num1 << endl;
	return 0;
}