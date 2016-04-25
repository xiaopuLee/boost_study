#include <boost/algorithm/string.hpp>
#include <vector>
#include <iostream>
#include <string>

#include <glog/logging.h>

int main(int argc, char** argv)
{
	google::InitGoogleLogging(argv[0]);
	std::vector<std::string> strVec;
	std::string str = "sharp-L,tell,Ding";
	boost::split(strVec, str, boost::is_any_of(",-"));
	CHECK_GT(strVec.size(), 0) << "strVec is empty";
	std::vector<std::string>::iterator it = strVec.begin();
	for(; it!=strVec.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}
