/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.11.exe 1.11.cpp
 * 2. .\1.11.exe
 * 
*/

#include <iostream>
#include <cmath>

int smaller(int a, int b);

/**
 * 输入两个整数，打印这两个整数之间的所有整数
*/
int main()
{ 
    int v1 = 0, v2 = 0, vs = 0, vb = 0, a = 0;
    std::cout << "input two int:" << std::endl;
    std::cin >> v1 >> v2;
    
    a = abs(v1 - v2);
    vs = smaller(v1, v2);
    vb = vs + a;

    std::cout << "integers between " << vs << " and " << vb << ": " << std::endl; 
    while (vs <= vb)
    {
        std::cout << vs << ", ";
        ++vs;
    }    
    std::cout << "\b\b  \b\b" << std::flush;
    return 0;
}

int smaller(int a, int b)
{
    return a < b ? a : b;
}