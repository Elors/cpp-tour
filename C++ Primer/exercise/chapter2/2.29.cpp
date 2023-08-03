int main()
{
    /**
     * 
     * 假设已有练习2.28中的变量，下列哪些语句是合法的？
     * 说明原因
     * 
    */

    // 1
    // i = ic;
    // 合法，将一个const int变量赋值给一个int类型变量

    // 2
    // p1 = p3;
    // 合法，将一个指向int类型的const指针赋值给一个指向int类型的指针

    // 3
    // p1 = &ic;
    // 不合法。不允许将const int指针赋值给非const的int指针

    // 4
    // p3 = &ic;
    // 合法，将一个const int变量的地址赋值给一个指向const int地址的const int指针

    // 5
    // p2 = p1;
    // 不合法，指向int的const指针无法被修改

    // 6
    // ic = *p3;
    // 不合法，ic是const int类型，无法被修改
}