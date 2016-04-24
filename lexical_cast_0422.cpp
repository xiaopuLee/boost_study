#include<iostream>
#include<boost/lexical_cast.hpp>
#include<string>

using namespace std;
using boost::lexical_cast;
using boost::bad_lexical_cast;

int main(int argc, char** argv)
{
	int num = 0;
	string str = "";
	const char a[10] = "01111111";
	try
	{
		std::cout << "converting int to string" << std::endl;
		num = 11;
		str = lexical_cast<string>(num);
		std::cout << "  current string " << str << std::endl;

		std::cout << "converting string to int " << std::endl;
		str = "-123333";
		num = lexical_cast<int>(str);
		std::cout << "  current num " << num << std::endl;


		std::cout << "converting part of string to int " << std::endl;
		//pay attention to below, the first argument is the
		num = lexical_cast<int>(str.data(), 3);
		std::cout << "  current num " << num << std::endl;

		//throw an bad_lexical_cast exception here
		std::cout << "converting char arrary to int" << std::endl;
		num = lexical_cast<int>(a, 10);
		std::cout << num << std::endl;
	}
	catch(const bad_lexical_cast& bad_cast)
	{
		std::cout << bad_cast.what() << std::endl;
	}
	return 0;
}
