// Program for OOPs

#include <iostream>
using namespace std;

class Circle
{
	private:
		double radius;
	public:
		double getRadius() const;
		double getArea() const;
		double getPerimeter() const;
		void setRadius(double value);

};


// Definition of getRadius
double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	const double PI = 3.14;
	return (PI * radius * radius);
}

double Circle::getPerimeter () const {
	const double PI = 3.14;
	return (PI * 2 * radius);
}

void Circle::setRadius(double value) {
	radius = value;
}


// Class definition over
// Now main programm

int main(int argc, char const *argv[])
{
	cout << "Circle 1 " << endl;
	Circle circle1 ;
	circle1.setRadius(10.5);
	cout << "Radius : " << circle1.getRadius() << endl ;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl;
	Circle circle2 ;
	circle2.setRadius(3.5);
	cout << "Radius : " << circle2.getRadius() << endl ;
	cout << "Area : " << circle2.getArea() << endl;
	cout << "Perimeter : " << circle2.getPerimeter() << endl;
	return 0;
}


