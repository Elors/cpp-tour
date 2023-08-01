// 读取多个ISBN相同的销售记录，并统计每个ISBN有几条销售记录。
// 执行命令：./1.23.exe <infile4.txt

#include <iostream>
#include <unordered_map>
#include "Sales_item.h"

int main()
{
    std::unordered_map<std::string, Sales_item> map = {};
    Sales_item item;
    while (std::cin >> item)
    {
        if (map.find(item.isbn()) != map.end())
            map[item.isbn()] += item;
        else
            map[item.isbn()] = item;
    }

    for (auto& it: map) {
        std::cout << it.second << std::endl;
    }    
    return 0;
}
