int main()
{
    /**
     * 
     * 说明下面这段代码的作用
     * 
    */

    int i = 42;         // 声明一个名为i的int类型变量，初始化值为42
    int *p1 = &i;       // 声明一个名为p1的int类型指针，初始化值为i的内存地址
    *p1 = *p1 * *p1;    // 赋值到p1指针指向的内存地址，值为该地址的int值的平方
}