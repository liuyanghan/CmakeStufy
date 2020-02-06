#include <iostream>
#include "../../Project3/include/a3.h"
#include "../../Project2/include/a2.h"
//#include "../../third_party/include/a2.h"
void f1()
{
	std::cout<< __FUNCSIG__<<std::endl;
}

int main()
{
	f1();
	f2();
	f3();

	return 0;
}