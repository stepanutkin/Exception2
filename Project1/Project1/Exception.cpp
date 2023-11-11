#include "Exception.h"

Exception::Exception(std::string str){
	std::cout << "Error to create a figure. Reason:" << str;
}