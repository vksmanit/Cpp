#include<iostream>
using namespace std;

// Class Definition
class Circle
{
private:
	double radius;
public:
	Circle(double radius); 		// Parameter Constructor
	Circle(); 					// Default Constructor
	~Circle(); 	// Destructor
	Circle(const Circle &circle); // Copy Constructor

	void setRadius(double radius); 	// Mutator
	double getRadius() const;		// Accessor
	double getArea() const;			// Accessor
	double getPerimeter() const;	// Accessor
};

Circle::Circle(double rds):radius(rds)
{
	cout << "The parameter constructor was called " << endl;
}

Circle::Circle():radius(1.0)
{
	cout << "The default constructor was called " << endl;
}

Circle::Circle(const Circle &circle):radius(circle.radius)
{
	cout << "The copy constructor was called " << endl;
}

Circle::~Circle(){
	cout << "The destructor was called with radius " << radius << " " << endl;

}
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

int main(int argc, char const *argv[])
{
	cout << "Circle 1 " << endl;
	Circle circle1(5.2) ;
	cout << "Radius : " << circle1.getRadius() << endl ;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl;

	cout << "Circle 2 " << endl;
	Circle circle2(circle1) ;
	cout << "Radius : " << circle2.getRadius() << endl ;
	cout << "Area : " << circle2.getArea() << endl;
	cout << "Perimeter : " << circle2.getPerimeter() << endl;

	cout << "Circle 3 " << endl;
	Circle circle3;
	cout << "Radius : " << circle3.getRadius() << endl ;
	cout << "Area : " << circle3.getArea() << endl;
	cout << "Perimeter : " << circle3.getPerimeter() << endl;
	return 0;
}
