#include <iostream>

int main()
{
    /**
     * 编写代码分别更改指针的值和指针所指对象的值
    */

    int i = 12;
    int *ip = &i;
    int j = 11;
    std::cout << "ip=" << ip << ", *ip=" << *ip << std::endl;
    std::cout << "do something..." << std::endl;

    // change value
    *ip = j;
    *ip = 17;

    // change address
    ip = &j;
    
    std::cout << "ip=" << ip << ", *ip=" << *ip << std::endl;
}