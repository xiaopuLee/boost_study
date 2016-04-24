#include <boost/algorithm/string.hpp>
#include <iostream>

int main()
{
	std::string str1 = " hello world!";
	boost::to_upper(str1);
	std::cout << "to upper:" << str1 << std::endl;

	boost::trim(str1);
	std::cout << "after trim:" << str1 << std::endl;

	std::string str2 = boost::to_lower_copy(boost::ireplace_first_copy(str1, "hello", "goodby"));

	std::cout << "the str2:" << str2 << std::endl;

	return 0;
}
