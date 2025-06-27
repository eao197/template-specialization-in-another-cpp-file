#pragma once

#include <iostream>

class A {};

class B {};

template<typename T>
struct Common
{
	void
	say()
#if NO_COMMON_IMPL
;
#else
	{
		std::cout << "Common implementation" << std::endl;
	}
#endif
};

