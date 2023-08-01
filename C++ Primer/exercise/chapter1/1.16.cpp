#include <iostream>

int main()
{
    long sum = 0, v = 0;
    std::cout << "u can start to input numbers, " << std::endl;
    std::cout << "once u finish input, press ctrl+z and then press enter to get sum:" << std::endl;
    while (std::cin >> v)
    {
        sum += v;
    }
    std::cout << "sum is " << sum << std::endl;

    return 0;
}