#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec(1, 10);
    std::cout << vec.size() << std::endl;

    int i(10);
    std::cout << "test sizeof";
    std::cout << sizeof(++i)<< std::endl;
    std::cout << i << std::endl;
    return 0;
}
