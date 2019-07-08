
#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	cout << "Circle Calculator" << endl << endl;

	double radius = 0.0;
	cout << "Enter radius: ";
	cin >> radius;

	double diameter = 2.0 * radius;
	//label number
	double area = M_PI * radius * radius;

	cout << "radius: " << radius << endl
		 << "diameter: " << diameter << endl
		 << "area: " << area << endl;

	system("pause");
	return 0;
}