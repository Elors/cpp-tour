#include <string>

/**
 * 下列变量的初始值分别是什么？
*/

std::string global_str;     // will be empty string
int global_int;             // will be 0

int main()
{
    int local_int;          // will be dirty data in memory
    std::string local_str;  // will be empty string

    /**
     * 两个global前缀的变量是全局变量，所以会被初始化为0（由于运行时存在堆上，是干净的内存空间）
     * 
     * 两个local前缀的变量：
     * local_int是定义在函数内部的int类型变量，未提供初始化值，变量将会继承被分配的内存空间中的脏数据。
     * local_str是定义在函数内部的std::string类型变量，同样未提供初始化值，但由于std::string中的统一实现：
     * 即"任何未提供初始化值的std::string类型变量都会被初始化为空字符串", 故此处的std::string值为空字符串。
     * 
    */

}
