#include <iostream>

int main()
{
    /**
     * 解释下列定义的含义。
     * 对于非法的定义，请说明错在何处并改正
    */

    // 1
    std::cin >> int input_value;
    // 这条语句试图对一个未被初始化的变量进行赋值
    /**
     * 应改为：
     * int input_value;
     * std::cin >> input_value;
    */
    

    // 2
    int i = { 3.14 };
    // 会丢失浮点部分，i的值为3
    /**
     * 结果：
     * 编译器报错：error: narrowing conversion of '3.1400000000000001e+0' from 'double' to 'int' [-Wnarrowing]
     * 无法通过编译（在历史版本的gcc中，这个问题只会引发编译器警告，而不会终止编译）
     * 
     * */    


    // 3
    double salary = wage = 9999.99;
    // 不支持这种功能定义，一条语句定义多个变量用, 分隔
    // double salary, wage = 9999.99;
    /**
     * 结果：
     * 错！C++与其他很多语言不同，上述声明仅会给wage赋值9999.99，而salary的值为对应内存空间的垃圾数据：
     * salary: 2.99027e-314
     * wage: 9999.99
     * 
     * 应改为：
     * double salary = 9999.99, wage = 9999.99;
    */
    

    // 4
    int i = 3.14;
    // 会丢失浮点部分，i的值为3
    
}

