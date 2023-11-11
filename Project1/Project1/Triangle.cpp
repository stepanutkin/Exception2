#include "Triangle.h"
Triangle::Triangle(double a, double b, double c, double A, double B, double C) {
	this->a = a;
	this->b = b;
	this->c = c;
	if (A + B + C != 180) {
		throw Exception("the sum of engles is not 180");
	}
	this->A = A;
	this->B = B;
	this->C = C;
}

double Triangle::get_a() {
	return a;
}
double Triangle::get_b() {
	return b;
}
double Triangle::get_c() {
	return c;
}
double Triangle::get_A() {
	return A;
}
double Triangle::get_B() {
	return B;
}
double Triangle::get_C() {
	return C;
}
void Triangle::print_info(Figure*){
	std::cout << "Edges: " << "a = " << get_a() << " b = " << get_b() << " c = " << get_c() << std::endl;
	std::cout << "Angles: " << "A = " << get_A() << " B = " << get_B() << " C = " << get_C() << std::endl;
}