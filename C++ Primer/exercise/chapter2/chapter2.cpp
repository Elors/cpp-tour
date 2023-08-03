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

    // pointer for pointer
    int *pi = &ival;
    int **ppi = &pi;

    // reference for pointer
    int i = 42;
    int *p;         // 一个int类型指针
    int *&r = p;    // 一个对指针p的引用
    r = &i;         // 等价于 p = &i
    *r = 0;         // 等价于 *p = 0; 或 i = 0;


    /**
     * 
     * Const
     * 
    */
    // const with reference
    const int ci = 1024;
    const int &r1 = ci;
    // r1 = 42;        // 非法，常量引用无法被赋值
    // int &r2 = ci;   // 非法，int类型引用无法被const int类型的变量初始化

    // const with pointer
    const double pii = 3.14;
    // double *ptr = &pii;         // 非法，double类型指针无法指向一个const double类型的内存地址
    const double *cptr = &pii;
    // *cptr = 42;                 // 非法，const double类型指针指向的地址是const double类型的，无法被赋值
    
    // 一种例外情况：
    double dval = 3.14;
    cptr = &dval;           // 合法，但不可向*cptr赋值。此时，const double类型指针cptr指向的内存地址是一个double类型的地址

    // const pointer
    int errNumb = 0;                    // 一个int类型变量
    int *const curErr = &errNumb;       // 一个int常量指针，指向int常量的内存地址。此处指向errNumb的内存地址
    const double piii = 3.14159;        // 一个double类型变量
    const double *const pip = &piii;    // 一个double类型指针，指向double常量的内存地址。此处指向的是piii的内存地址。
    
    /**
     * const和point到这里有开始有些绕了, 总结一下规律：
     * 下文例子取自post：https://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const
     * 从右向左来读，并且在每一个*的左侧加入to：
     *  int ** - pointer to pointer to int    // 一个指向int类型指针的指针 
     *  int ** const - a const pointer to a pointer to an int    // 一个指向int类型指针的常量指针
     *  int * const * - a pointer to a const pointer to an int    // 一个指向int类型常量指针的指针 
     *  int const ** - a pointer to a pointer to a const int    // 一个指向int类型常量的指针的指针
     *  int * const * const - a const pointer to a const pointer to an int    // 一个指向int类型常量指针的常量指针
     * 
    */


    /**
     * 
     * constexpr
     * 
    */
    constexpr int mf = 20;
    constexpr int limit = mf + 1;


    /**
     * 
     * decltype
     * 
    */
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b;
    decltype(*p) c;     // 错误，decltype(*p)的类型是int&，必须要有初始化值
    decltype((i)) d;    // 错误，原因同上
    decltype(i) e;      //  正确，e是一个int变量


    /**
     * 
     * Struct
     * 
    */
    // struct Sales_data {
    //     std::string bookNo;
    //     unsigned units_sold = 0;
    //     double revenue = 0.;
    // };
    

}