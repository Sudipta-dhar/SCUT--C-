// Turorial 2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Person
{
private:
    string fname, lname;
public:
    Person();
    void set_flname(string, string);
    void show();
    void showformat();
};
Person::Person()
{  

}
void Person::set_flname(string f, string l)
{

    fname = f;
    lname = l;

}
void Person::show()
    {
    cout << fname << " " << lname;
    }
void Person::showformat()
{
    cout <<"\n"<<lname << " " << fname;
}

int main()
{
    Person p;
    string firstname, lastname;
    cout << "enter first and last name:";
    cin >> firstname >> lastname;
    p.set_flname(firstname,lastname);
    p.show();
    p.showformat();


}

