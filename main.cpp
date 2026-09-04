#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

// Lab 3 — Your Name
// CIS 5 Week 03 · Types & variables

int main() {
	string name;
	cout << "Name: ";
	cin >> name;
	int Age = 0;
	cout << "Age: ";
	cin >> Age;
	double height_m = 0.0;
	cout << "Height (m): ";
	cin >> height_m;
	char initial;
	cout << "Initial: ";
	cin >> initial;
	bool student;
	cout << "Student: ";
	cin >> student;
	int CURRENT_YEAR = 2026;
	cin >> CURRENT_YEAR;
	cout << "Current Year is: " << CURRENT_YEAR << "\n";

  // TODO: declare + initialize
  // std::string name = ...;
  // int age = ...;
  // double height_m = ...;
  // char initial = ...;
  // bool student = ...;

  cout << "==== About me ====\n";
  // TODO: labeled prints for every variable + CURRENT_YEAR

  return 0;
}
