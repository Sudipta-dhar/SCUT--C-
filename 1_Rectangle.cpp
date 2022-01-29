// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Rectangular
{
private:
	int length, wedth;
public:
	int returnarea();
	void setlength(int);
	void setwedth(int);
};
void Rectangular::setlength(int l)
{
	length = l;
}
void Rectangular::setwedth(int w)
{
	wedth = w;
}
int Rectangular::returnarea()
{
	return length * wedth;
}
int main()
{
	int l, w;
	cout << "please enter l  and w :";
	cin >> l >> w;
	Rectangular rect;
	rect.setlength(l);
	rect.setwedth(w);
	cout << rect.returnarea();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
