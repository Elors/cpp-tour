#include <iostream>

int main()
{
    // 下面的for循环完成了什么功能，sum的终值是多少？
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;

    // 上述for循环功能是计算-100到100之间的所有整数的和，最终值是0.
    // std::cout << sum << std::endl;
}