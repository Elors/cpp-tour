/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.10.exe 1.10.cpp
 * 2. .\1.10.exe
 * 
*/

#include <iostream>

int main()
{
    int v = 10;
    while (v >= 0)
    {
        std::cout << v << " ";
        --v;
    }    
    return 0;
}