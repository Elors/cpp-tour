// 读取多个ISBN相同的销售记录，并输出所有记录的和。
// 执行命令：./1.22.exe <infile3.txt

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, itemSum;
    while (std::cin >> item)
    {
        if (itemSum.isbn() == "")
            itemSum = Sales_item(item.isbn());
        itemSum = itemSum + item;
    }
    std::cout << "Sum is: " << itemSum << std::endl;
    return 0;
}
