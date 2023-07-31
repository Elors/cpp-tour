/**
 * platform: windows 10 22H2
 * tool: gcc v13.1.0
 * git: 2.41.0.windows.3
 * run in Windows PowerShell as:
 * 1. g++ -lstdc++ -o 1.7.exe 1.7.cpp
 * 2. .\1.7.exe
 * 
*/

#include <iostream>

/*
 * comments/* */auto can not do something like this.
 * "can't do something like this" will recognize as source code 
 * like rest of the program.
 * 
*/
int main()
{
    /**
    // 运行编译器报错：
    //  End of search list.
    //  Compiler executable checksum: 5d8e300054bca428f5c855d536a5ecdb
    //  1.7.cpp:14:17: error: 'can' does not name a type
    //  14 |  * comments/* */can nott do something like this.
    //     |                 ^~~
    //  编译器将can识别成了一个变量名，但由于没有找到声明类型，所以编译报错。
    // 
    // 
    //  突发奇想如果给can前面加入一个类型会怎样？ 在can前加入auto，编译报错如下：
    //  End of search list.
    //  Compiler executable checksum: 5d8e300054bca428f5c855d536a5ecdb
    //  1.7.cpp:14:26: error: expected initializer before 'not' token
    //  14 |  * comments/* */auto can not do something like this.
    //     |                          ^~~
    //  这次编译器成功将can识别成了一个变量名，但是由于使用auto表述一个变量需要进行初始化（编译器需要推断auto的真实类型），
    //  而上述语句显然没有进行初始化，故报错。
    // 

    return 0;
}