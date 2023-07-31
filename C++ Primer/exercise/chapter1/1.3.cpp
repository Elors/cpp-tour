/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.3.exe 1.3.cpp     
 * 2. .\1.3.exe
 * 
 * problem:
 * 1. get error: "undefined reference to `std::cout' collect2.exe: error: ld returned 1 exit status" 
 *    when use command "gcc .\1.3.cpp -o 1.3.exe".
 *        it said the ld (which part of the collect2.exe, GNU linker) could not find "std::cout" at the linking process. 
 * 
 * 2. after change command to "g++ -Wall -Wextra -Werror .\1.3.cpp -lstdc++ -o 1.3.exe"
 *    it runs successfully with exit code 0. but when i run 1.3.exe with ".\1.3.exe", the PowerShell execute for a couple of seconds and put nothing.
 *    Then i use $LastExitCode to check exit code, got -1073741819.
 *    after searching anwser on stackoverflow, i switch to gitbash to build and exexcute this, and finally its shows "Segmentation fault" when i run it.
 * 
 *    这个问题在排除了代码、编译器、连接器、libstdc++库和路径的问题后，我怀疑是git bash环境下导致的问题，然后我发现了GitHub上的MINGW-packages项目的一个issue：
 *    https://github.com/msys2/MINGW-packages/issues/1104
 *    这个issue指出即便是编译最简单的Hello World C++, 仍然会出现"Segmentation fault"问题。
 *    我的原来的git版本是2.33.0.windows.2, 在更新到2.41.0.windows.3版本后，这个问题得到了解决。
 * 
*/

#include <iostream>

int main()
{
    std::cout << "Hello? World!" << std::endl;
    return 0;
}