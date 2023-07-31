/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.4.exe 1.4.cpp
 * 2. .\1.4.exe
 * 
*/

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The result of " << v1 << " * " << v2 
              << " is " << v1 * v2 << std::endl;
    return 0;
}