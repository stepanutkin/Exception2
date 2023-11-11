#pragma once
#include "Figure.h"
#include "Exception.h"

class Triangle:public Figure {
public:
	Triangle(double a, double b, double c, double A, double B, double C);
	double get_a();
	double get_b();
	double get_c();
	double get_A();
	double get_B();
	double get_C();
	void print_info(Figure*) override;
private:
	double a, b, c;
	double A, B, C;
};