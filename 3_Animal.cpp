// Tuturial 1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Animal
{
private:
    int age;
    string name;
    string extra;
public:
    Animal(int, string, string);
   string showname();
    int showage();
    string showextra();
    void setage(int);
    void setname(string);
    void setextra(string);

};
Animal::Animal(int a, string n, string s)
{
    age = a;
    name = n;
    extra = s;
}
void Animal::setage(int a)
{
    age = a;
}
void Animal::setname(string n)
{
    name = n;
}
void Animal::setextra(string s)
{
    extra = s;
}
int Animal::showage()
{
    return age;
}
string Animal::showname()
{
    return name;
}
string Animal::showextra()
{
    return extra;
}
int main()
{
    int a;
    string n, s;
    cin >> a >> n >> s;
    Animal animal(a, n, s);
    cout << animal.showage() << endl;
    cout << animal.showname() << endl;
    cout << animal.showextra() << endl;
    cin >> a >> n >> s;
    animal.setage(a);
    animal.setname(n);
    animal.setextra(s);
    cout << animal.showage() << endl;
    cout << animal.showname() << endl;
    cout << animal.showextra() << endl;
    


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
