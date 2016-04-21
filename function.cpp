#include<iostream>
#include<boost/function.hpp>
#include<iomanip>
int fun(int a, int b)
{
	return a + b;
}
double fund(double a, double b)
{
	return a - b;
}
int fun2(int a, int b)
{
	return a - b;
}
int main()
{
	boost::function<int (int, int)> i_i_i;
	i_i_i = &fun;
	std::cout << fun(1, 2) << " " 
		<< i_i_i(1, 2) << std::endl;
	i_i_i = &fund;
	std::cout << std::setprecision(3) << fund(3.1, 4.1) << " "
		<< i_i_i(3.1, 4.1) << std::endl;
	i_i_i = &fun2;
	std::cout << i_i_i(3, 4) << std::endl;
	return 0;	
}
