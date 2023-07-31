/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.5.exe 1.5.cpp
 * 2. .\1.5.exe
 * 
*/

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:";
    std::cout << std::endl;
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The result of ";
    std::cout << v1;
    std::cout << " * ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;

    return 0;
}