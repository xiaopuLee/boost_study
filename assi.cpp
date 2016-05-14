#include <iostream>
#include <vector>
#include <boost/assign.hpp>
#include <glog/logging.h>
int main()
{
    using namespace boost::assign;
    google::InitGoogleLogging("sharp");
    std::vector<int> v;
    push_back(v)(1)(2)(3)(4)(5);

    std::vector<int>::iterator it = v.begin();
    for(; it!=v.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    CHECK_EQ(v.size(), 5) << "the size of v is : " << v.size();


    std::set<std::string> strSet;
    strSet += "c", "python", "c#", "cpp";

    CHECK_EQ(strSet.size(), 4) << "the size of set is " << strSet.size();

   return 0; 
}
