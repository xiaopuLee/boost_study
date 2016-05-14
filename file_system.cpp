#include <iostream>
#include <boost/filesystem.hpp>

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		std::cout << "usage : path" << std::endl;
		return 1;
	}
	std::cout << argv[1] << " " << boost::filesystem::file_size(argv[1]) << std::endl;
	return 0;
}
