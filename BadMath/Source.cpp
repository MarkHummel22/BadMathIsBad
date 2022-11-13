#include <iostream>
#include <iomanip>
using namespace std;

float average(double, double, double);

int main()
{
	double i1 = 0, i2 = 0, i3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	

	float a = average(i1, i2, i3);

	cout << setprecision(2) << fixed << "The average is " << a << endl;

	return 0;
}

float average(double i1, double i2, double i3)
{
	cout << "First number: "; cin >> i1;
	cout << "Second number: "; cin >> i2;
	cout << "Third number: "; cin >> i3;
	return (i1 + i2 + i3) / 3.0;
}