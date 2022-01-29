#include<iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(string, string, int, int);
	void setFirstName(string);
	string getFirstName();
	void setLastName(string);
	string getLastName();
	void setmonthly_scholarship(int);
	int getmonthly_scholarship();
	void setstudent_ID(int);
	int getstudent_ID();
private:
	string firstName;
	string lastName;
	int monthly_scholarship;
	int student_ID;
};
Student::Student(string first, string last, int m_scholarship, int s_id)
{
	firstName = first;
	lastName = last;
	if (m_scholarship > 0)
		monthly_scholarship = m_scholarship;
	else
	{
		monthly_scholarship = 0;
		cout << "Initial monthly_scholarship was invalid." << endl;
	}
	if (s_id > 0)
		student_ID = s_id;
	else
	{
		student_ID = 0;
		cout << "Initial student_ID was invalid." << endl;
	}
}
void Student::setFirstName(string first)
{
	firstName = first;
}
void Student::setLastName(string last)
{
	lastName = last;

}
void Student::setstudent_ID(int s_id)
{
	if (s_id > 0)
		student_ID = s_id;
	else
	{
		student_ID = 0;
		cout << "Initial student_ID was invalid." << endl;

	}
}
void Student::setmonthly_scholarship(int m_scholarship)
{
	if (m_scholarship > 0)
		monthly_scholarship = m_scholarship;
	else
	{
		monthly_scholarship = 0;
		cout << "Initial monthly_scholarship was invalid." << endl;

	}
}
string Student::getFirstName()
{
	return firstName;
}
string Student::getLastName()
{
	return lastName;
}
int Student::getmonthly_scholarship()
{
	return monthly_scholarship;
}
int Student::getstudent_ID()
{
	return student_ID;
}
int main()
{
	Student Student1("Jielun", "Zhou", 12, 55);
	Student Student2("Meimei", "Han", 2, 10);
	cout << "Student1's name is: " << Student1.getFirstName() << " " << Student1.getLastName() << endl;
	cout << "Student1's id is: " << Student1.getstudent_ID() << endl;
	cout << "and monthly_scholarship is: " << Student1.getmonthly_scholarship() << endl;
	cout << "After 10 percent increment in  monthly_scholarship:" << endl;
	int incrementedm_scholarship1 = Student1.getmonthly_scholarship();
	incrementedm_scholarship1 = incrementedm_scholarship1 + (incrementedm_scholarship1 * 0.1);
	Student1.setmonthly_scholarship(incrementedm_scholarship1);
	cout << "Student1's monthly_scholarship is: " << Student1.getmonthly_scholarship() << endl;


	cout << "\n\nStudent2's name is: " << Student2.getFirstName() << " " << Student2.getLastName() << endl;
	cout << "Student2's id is: " << Student2.getstudent_ID() << endl;
	cout << "and monthly_scholarship is: " << Student2.getmonthly_scholarship() << endl;
	cout << "After 10 percent increment in  monthly_scholarship:" << endl;
	int incrementedm_scholarship2 = Student2.getmonthly_scholarship();
	incrementedm_scholarship2 = incrementedm_scholarship2 + (incrementedm_scholarship2 * 0.1);
	Student2.setmonthly_scholarship(incrementedm_scholarship2);
	cout << "Student2's monthly_scholarship is: " << Student2.getmonthly_scholarship() << endl;

}
