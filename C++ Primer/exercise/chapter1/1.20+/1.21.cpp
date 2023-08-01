// 读取两个ISBN相同的Sales_item，并输出他们的和
// 执行命令：./1.21.exe <infile2.txt

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}
