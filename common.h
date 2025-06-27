#pragma once

#include <iostream>

class A {};

class B {};

template<typename T>
struct Common
{
	void
	say()
	{
		std::cout << "Common implementation" << std::endl;
	}
};

