#include <iostream>
using namespace std;
int main()
{

    int num1 = 0, num2 = 0, result = 0;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second number (larger than the first): ";
    cin >> num2;

    int i = num1;
    while (i <= num2)
    {
        result += i;
        i++;
    }

    cout << "The sum of all number between " << num1 << " and " << num2 << " is: " << result;

    return 0;

}