#include <iostream>

int main()
{
    /**
     * 
     * 假设已有练习2.30中的声明
     * 下列哪些语句是合法的
     * 请说明顶层const和底层const在每个例子中的体现
     * 
    */


    // from exercise 2.30
    const int v2 = 0;           // v2: 顶层
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;  // p2: 底层，p3: 底层和顶层，r2: 底层

    
    r1 = v2;    // 合法，v2的顶层const被隐式忽略
    p1 = p2;    // 不合法，p2为底层
    p2 = p1;    // 合法，p1被隐式的转换为底层
    p1 = p3;    // 不合法，p3为底层
    p2 = p3;    // 合法，p2和p3均为底层

    std::cout << r1 << std::endl;
}