#include<iostream>
#include<string>

using namespace std;
int main()
{
	double totalChargesMonth = 0;
	double totalCreditsMonth = 0;
	int accountNumber;
	double initialBalance;
	double availableCredit;
	double newBalance;
	cout << "Enter account number (or -1 to quit) : ";
	cin >> accountNumber;
	while (accountNumber != -1)
	{
		cout << "Enter beginning balance: ";
		cin >> initialBalance;
		cout << "Enter total charges: ";
		cin >> totalChargesMonth;
		cout << "Enter total credits: ";
		cin >> totalCreditsMonth;
		cout << "Enter credit limit: ";
		cin >> availableCredit;
		newBalance = (initialBalance + totalChargesMonth - totalCreditsMonth);
		if (newBalance > availableCredit)
		{
			cout << "\nNew balance is " << newBalance << endl;


			cout << "Account: " << accountNumber << endl;
			cout << "Credit limit: " << availableCredit << endl;
			cout << "Balance: " << newBalance << endl;
			cout << "Credit Limit Exceeded. " << endl;
		}
		else
		{
			cout << "\nNew balance is " << newBalance << endl;
		}
		cout << "Enter account number (or -1 to quit) : ";
		cin >> accountNumber;
	}

	return 0;
}


