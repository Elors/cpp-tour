// 执行命令：./1.20.exe <infile.txt
// 上述命令可以在运行./1.20.exe的同时，将 infile.txt 文件重定向到1.20.exe的标准输入流

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    while (std::cin >> item)
        std::cout << item << std::endl;

    return 0;
}
