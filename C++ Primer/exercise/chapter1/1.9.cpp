/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.9.exe 1.9.cpp
 * 2. .\1.9.exe
 * 
*/

#include <iostream>

int main()
{
    int v = 50, sum = 0;
    while (v <= 100)
    {
        sum += v;
        ++v;
    }

    std::cout << "sum of 50...100 is " << sum << std::endl;
    
    return 0;
}