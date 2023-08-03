int main()
{
    /**
     * 
     * 说明以下定义，指出其中不合法的。
     * 
    */

    // 1
    // int i, *const cp;
    // 合法。
    // 错误，常量指针cp需要给定初始化值。
    
    // 2
    // int *pl, *const p2;
    // 合法。pl是一个指向int类型的指针，p2是一个指向int类型的const int指针。
    // 错误，常量指针p2需要给定初始化值。

    // 3
    // const int ic, &r = ic;
    // 不合法，const变量ic需要给定初始化值

    // 4
    // const int *const p3;
    // 合法。定义了一个指向const int类型的常量指针p3
    // 错误，常量指针需要给定初始化值。

    // 5
    // const int *p;
    // 合法。定义了一个指向const int类型的指针p
}