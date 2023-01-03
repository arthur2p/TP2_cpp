/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 10:14:42
  * @Last Modified time: 2022-10-03 15:16:54
  *
  * @Description: Final class
  */


#include "date.h"
#include <iostream>

int main(int argc, char const* argv[]) {
	Date a_day(2023, 12, 31);
	a_day.next();
	std::cout << "a day + 1: " << toString(a_day) << std::endl;
	std::cout << "#day: " << dayOfYear(a_day) << std::endl;
	Date b_day(2024, 1, 1);
	b_day.back();
	std::cout << "b day - 1: " << toString(b_day) << std::endl;
	std::cout << "#day: " << dayOfYear(b_day) << std::endl;
	Date c_day(2004, 2, 28);
	c_day.next();
	std::cout << "c day + 1: " << toString(c_day) << std::endl;
	std::cout << "#day: " << dayOfYear(c_day) << std::endl;
	c_day.updateMonth(12);
	c_day.updateDay(31);
	std::cout << "c day update: " << toString(c_day) << std::endl;
	std::cout << "#day: " << dayOfYear(c_day) << std::endl;

	return 0;
}