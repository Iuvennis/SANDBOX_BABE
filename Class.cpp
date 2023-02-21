#include <conio.h>
#include <string>
#include <iostream>

using namespace std;

class Man {
	string name;
	string lname;
	int age;
	int height;

	void set_data(string n, string ln, int a, int h) {
		name = n;
		lname = ln;
		age = a;
		height = h;
	}
	void get_data() {
		cout << name << lname << age << height;
	}
};

int main() {
	

	Man Vasya;
	Man Petya;

	Vasya.set_data("Vasiliy", "Rurikovich", 33, 168);
	Petya.set_data("Petr", "Romanov", 27, 207);

	Vasya.get_data;
	Petya.get_data;
}