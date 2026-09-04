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
	const int CURRENT_YEAR = 2026;

  cout << "==== About me ====\n";
  cout << "Name: " << name << "\n";
  cout << "Age: " << Age << "\n";
  cout << "Height (m): " << height_m << "\n";
  cout << "Initial: " << initial << "\n";
  cout << "Student: " << student << "\n";
  cout << "Current Year: " << CURRENT_YEAR << "\n";
  // TODO: labeled prints for every variable + CURRENT_YEAR

  return 0;
}
