#include <iostream>

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    /**
     * 
     * i 会输出100
     * sum 会输出0到9的整数和
     * 
    */
}