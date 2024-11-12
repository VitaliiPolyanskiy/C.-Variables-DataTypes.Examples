#include <iostream>
using namespace std;

int main()
{
	// Вычисление площади и периметра прямоугольника
	int length, width;
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	cout << "Square of a rectangle  " << length * width << endl;
	cout << "Perimeter of a rectangle  " << (length + width) * 2 << endl;
	

	// Вычисление площади круга
	double radius;
	const double PI = 3.14;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << "Square of a circle: " << PI * radius * radius << endl;

	return 0;
}