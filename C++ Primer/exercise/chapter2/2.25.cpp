int main()
{
    /**
     * 
     * 说明下列变量的类型和值
     * 
    */

    // 1
    int* ip, i, &r = i;
    // ip   是一个未初始化的int指针
    // i    是一个未初始化的int变量
    // r    是一个对变量i的引用


    // 2
    int i, *ip = 0;
    // i    是一个未初始化的int变量
    // ip   是一个未指向任何内容的int指针


    // 3
    int * ip, ip2;
    // ip   是一个未初始化的int指针
    // ip2  是一个未初始化的int变量

}