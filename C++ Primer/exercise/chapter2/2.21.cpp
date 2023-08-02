int main()
{
    /**
     * 
     * 解释下述定义，这些定义中是否有非法的？
     * 如果有，为何非法？
     * 
    */

    int i = 0;
    
    // 1
    double* dp = &i;
    // 非法，int类型的内存地址无法用于一个double类型指针的初始化。


    // 2
    int *ip = i;
    // 非法，int类型无法用于一个int类型指针的初始化。


    // 3
    int *p = &i;
    // 合法，取int类型变量i的内存地址，用于int类型指针p的初始化。
}