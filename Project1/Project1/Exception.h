#pragma once
#include <exception>
#include <string>
#include <iostream>

class Exception:public std::exception{
public:
	Exception(std::string str);
};