#include <iostream>

int main()
{
    /**
     * 
     * 指出下面代码中的每一个变量的类型和值
     * (题目提示：i=x的类型是int&，即赋值语句是会返回引用类型这种左值的一类语句)
     * 
    */

    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;

    /**
     * a: int类型变量，值为3
     * b: int类型变量，值为4
     * c: int类型变量，值为3
     * d: int&类型变量，与a同义，值为3
    */

    std::cout << a << std::endl
              << b << std::endl
              << c << std::endl
              << d << std::endl;
}