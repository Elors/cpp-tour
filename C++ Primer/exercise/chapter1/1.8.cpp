/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.8.exe 1.8.cpp
 * 2. .\1.8.exe
 * 
*/

#include <iostream>

int main()
{
    
    // 指出下列哪些输出语句是合法的（如果有的话）：
    // 1. std::cout << "/*";
    // 2. std::cout << "*/";
    // 3. std::cout << /* "*/" */;
    // 4. std::cout << /* "*/" /* "/*" */;

    // 3不合法，形成了注释对（/**/）的嵌套
    // 1、2、4都没有这个问题，所以合法

    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;


    return 0;
}