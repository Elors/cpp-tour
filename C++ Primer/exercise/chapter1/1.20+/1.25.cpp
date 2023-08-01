// 读取多个ISBN相同的销售记录，并统计每个ISBN有几条销售记录。
// 执行命令：./1.23.exe <infile4.txt

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total, item;
    if (std::cin >> total)
    {
        // read one item
        while (std::cin >> item)
        {
            if (total.isbn() == item.isbn())
                total += item;
            else
            {
                std::cout << total << std::endl;
                total = item;
            }
        }
        std::cout << total << std::endl; // last isbn
    }
    else
    {
        // not even one item...
        std::cout << "not even one item...?" << std::endl;
    }

    return 0;
}