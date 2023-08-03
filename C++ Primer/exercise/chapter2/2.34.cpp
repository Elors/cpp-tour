#include <iostream>

int main()
{
    using namespace std;

    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    // a = 42;  // int a is 42
    // b = 42;  // int b is 42
    // c = 42;  // int c is 42
    // d = 42;  // 非法，int指针d不能被赋int值
    // e = 42;  // 非法，const int指针e不能被赋int值
    // g = 42;  // 非法，const int的引用无法更改

    /**
     * 
     * 基于练习2.33
     * 编写一段程序，输出赋值前后的内容
     * 
    */

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "g = " << g << endl;

    int temp = 42;
    a = 42;  // int a is 42
    b = 42;  // int b is 42
    c = 42;  // int c is 42
    d = &temp;  // 非法，int指针d不能被赋int值
    e = &temp;  // 非法，const int指针e不能被赋int值
    // g = temp;  // 非法，const int的引用无法更改

    cout << "=====after change=====" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << *d << endl;
    cout << "e = " << *e << endl;
    cout << "g = " << g << endl;

}