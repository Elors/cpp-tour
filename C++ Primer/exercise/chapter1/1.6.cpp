/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.6.exe 1.6.cpp
 * 2. .\1.6.exe
 * 
*/

#include <iostream>

int main()
{
    /**
     * 题目：
     * 解释下面的程序是否合法
     * 1. std::cout << "The sum of " << v1;
     * 2. << " and " << v2;
     * 3. << " is " << v1 + v2 << std::endl;
     * 
     * 如果程序合法，会输出什么？
     * 如果程序不合法，原因何在，应该如何修正？
     * 
    */

    /**
     * 问题出现在2行和第3行
     * 具体到问题都是相同的，由于第1行结尾用;符号表示语句已经结束，
     * 所以第2行和第3行的第一个 << 运算符是缺少左边的变量的。
     * 
     * 修改也非常简单，只需要去掉第1行和第2行的的;符号即可。
     * 
    */

    int v1 = 1000, v2 = 24;
    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;

    return 0;
}