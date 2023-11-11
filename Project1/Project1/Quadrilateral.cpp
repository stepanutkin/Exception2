#include "Quadrilateral.h"
#include "Exception.h"

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	if (A + B + C + D != 360) {
		throw Exception("The sum of angles is not 360");
	}
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

double Quadrilateral::get_a() {
	return a;
}
double Quadrilateral::get_b() {
	return b;
}
double Quadrilateral::get_c() {
	return c;
}
double Quadrilateral::get_d() {
	return d;
}
double Quadrilateral::get_A() {
	return A;
}
double Quadrilateral::get_B() {
	return B;
}
double Quadrilateral::get_C() {
	return C;
}
double Quadrilateral::get_D() {
	return D;
}

void Quadrilateral::print_info(Figure* f){
	std::cout << "Edges: " << "a = " << get_a() << " b = " << get_b() << " c = " << get_c() << " d = " << get_d() << std::endl;
	std::cout << "Angles: " << "A = " << get_A() << " B = " << get_B() << " C = " << get_C() << " D = " << get_D() << std::endl;
}