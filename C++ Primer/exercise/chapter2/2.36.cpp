#include <iostream>

int main()
{
    /**
     * 
     * 指出每一个变量的类型，以及程序结束时他们的值
     * 
    */

    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(b) d = a;
    ++c;
    ++d;

    /**
     * a: int类型变量，值为3
     * b: int类型变量，值为4
     * c: int类型变量，值为4
     * d: int类型变量，值为4
    */

    std::cout << a << std::endl
              << b << std::endl
              << c << std::endl
              << d << std::endl;
}