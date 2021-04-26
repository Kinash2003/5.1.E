//Object.h
#pragma once
#include "Bad_exception.h"

class Object
{
private:
	static unsigned int count;
public:
	static unsigned int Count();

	Object();
};
