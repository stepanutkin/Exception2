#include "Figure.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "parallelogram.h"
#include "rhombus.h"
#include "square.h"
#include "rectangle.h"

int main() {

	try {
		Quadrilateral r(30, 40, 50, 60, 80, 80, 100, 100);
		std::cout << "Success"<<std::endl;
		std::cout << "Quadrilateral:" << std::endl;
		r.print_info(&r);
		std::cout << std::endl;

	}
	catch (const Exception& error) {};
	

	return 0;
}