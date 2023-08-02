#include <iostream>

int main()
{
    /**
     * 哪些赋值是不合法的，为什么？
     * 哪些赋值时合法的，执行了什么操作？
    */

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    // 1
    r2 = 3.14159;
    std::cout << "1: " << r2 << std::endl;
    // 合法，等同于将double类型的变量d赋值为3.14159


    // 2
    r2 = r1;
    std::cout << "2: " << r2 << std::endl;
    // 合法，等同于将double类型的变量d赋值为0


    // 3
    i = r2;
    std::cout << "3: " << i << std::endl;
    // 合法，等同于将int类型的变量i赋值为0

    // 4
    r1 = d;
    std::cout << "4: " << r1 << std::endl;
    // 合法，等同于将int类型的变量i赋值为0


}