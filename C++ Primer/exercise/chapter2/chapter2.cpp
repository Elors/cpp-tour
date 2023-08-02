#include <iostream>

int main()
{
    /**
     * 
     * Reference
     * 
    */
    // refers to
    int ival = 1024;
    int &refVal = ival;
    // int &refVal2;    // error: ref must be initialized

    // change value
    refVal = 2;
    int ii = refVal;
    std::cout << "refVal refers to ival, change refVal to 2, ival will be? -> " 
              << ival << std::endl;

    int &refVal3 = refVal;
    int i = refVal; // i will be 2
    /**
     * 除了2.4.1节（55页）和15.2.3节（534页）的两种例外情况，
     * 其他所有引用类型都要和与之绑定的对象严格匹配。
    */


    /**
     * 
     * Pointer
     * 
    */
    int *ip1, *ip2;
    double dp, *dp2;
    
    // 
    int ival = 42;
    int *p = &ival;     // & 取地址符，p存放变量ival的地址，或者说p是指向变量ival的指针
    /**
     * 除了2.4.2节（56页）和15.2.3节（534页）的两种例外情况，
     * 其他所有指针类型都要和其指向的对象严格匹配。
    */
    std::cout << *p << std::endl;       // * 解引用符
    
    // null pointer
    int *p1 = nullptr;      // C++ 11
    int *p2 = 0;            // older than C++ 11
    int *p3 = NULL;         // use cstdlib




}